/*
* by Lewis Loflin www.bristolwatch.com lewis@bvu.net
* http://www.bristolwatch.com/rpi/i2clcd.htm
* Using wiringPi by Gordon Henderson
*
* Port over lcd_i2c.py to C and added improvements.
* Supports 16x2 and 20x4 screens.
*/

#include <wiringPiI2C.h>
#include <wiringPi.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include <i2clcd.h>


int fd;  // seen by all subroutines


int main()   {

  std::cout << "Starting..." << std::endl;

  if (wiringPiSetup () == -1) {
    exit (1);
  }

  std::cout << "Ready to print on i2clcd!" << std::endl;

  fd = wiringPiI2CSetup(I2C_ADDR);
  //wiringPiI2CSetup(I2C_ADDR);
  printf("fd = %d ", fd);

  lcd_init(fd); // setup LCD

  char array1[] = "Hello world!";

  while (1)   {

    lcdLoc(LINE1, fd);
    typeln("Using wiringPi", fd);
    lcdLoc(LINE2, fd);
    typeln("Geany editor.", fd);

    delay(2000);
    ClrLcd(fd);
    lcdLoc(LINE1, fd);
    typeln("I2c  Programmed", fd);
    lcdLoc(LINE2, fd);
    typeln("in C not Python.", fd);

    delay(2000);
    ClrLcd(fd);
    lcdLoc(LINE1, fd);
    typeln("Arduino like", fd);
    lcdLoc(LINE2, fd);
    typeln("fast and easy.", fd);

    delay(2000);
    ClrLcd(fd);
    lcdLoc(LINE1, fd);
    typeln(array1, fd);

    delay(2000);
    ClrLcd(fd); // defaults LINE1
    typeln("Int  ", fd);
    int value = 20125;
    typeInt(value, fd);

    delay(2000);
    lcdLoc(LINE2, fd);
    typeln("Float ", fd);
    float FloatVal = 10045.25989;
    typeFloat(FloatVal, fd);
    delay(2000);
  }

  return 0;

}

