#include "i2c_lcd.h"

#include <iostream>
#include <stdio.h>
#include <wiringPiI2C.h>
#include <wiringPi.h>
#include <stdlib.h>


//int fd;  // seen by all subroutines

// float to string
void typeFloat(float myFloat, int fd)   {
    char buffer[20];
    sprintf(buffer, "%4.2f",  myFloat);
    typeln(buffer, fd);
}

// int to string
void typeInt(int i, int fd)   {
    char array1[20];
    sprintf(array1, "%d",  i);
    typeln(array1, fd);
}

// clr lcd go home loc 0x80
void ClrLcd(int fd)   {
    lcd_byte(0x01, LCD_CMD, fd);
    lcd_byte(0x02, LCD_CMD, fd);
}

// go to location on LCD
void lcdLoc(int line, int fd)   {
    lcd_byte(line, LCD_CMD, fd);
}

// out char to LCD at current position
void typeChar(char val, int fd)   {

    lcd_byte(val, LCD_CHR, fd);
}

// this allows use of any size string
void typeln(const char *s, int fd)   {

    while ( *s ) lcd_byte(*(s++), LCD_CHR, fd);

}

void lcd_byte(int bits, int mode, int fd)   {

    //Send byte to data pins
    // bits = the data
    // mode = 1 for data, 0 for command
    int bits_high;
    int bits_low;
    // uses the two half byte writes to LCD
    bits_high = mode | (bits & 0xF0) | LCD_BACKLIGHT ;
    bits_low = mode | ((bits << 4) & 0xF0) | LCD_BACKLIGHT ;

    // High bits
    wiringPiI2CReadReg8(fd, bits_high);
    lcd_toggle_enable(bits_high, fd);

    // Low bits
    wiringPiI2CReadReg8(fd, bits_low);
    lcd_toggle_enable(bits_low, fd);
}

void lcd_toggle_enable(int bits, int fd)   {
    // Toggle enable pin on LCD display
    delayMicroseconds(500);
    wiringPiI2CReadReg8(fd, (bits | ENABLE));
    delayMicroseconds(500);
    wiringPiI2CReadReg8(fd, (bits & ~ENABLE));
    delayMicroseconds(500);
}

void lcd_init(int fd)   {
    // Initialise display
    lcd_byte(0x33, LCD_CMD, fd); // Initialise
    lcd_byte(0x32, LCD_CMD, fd); // Initialise
    lcd_byte(0x06, LCD_CMD, fd); // Cursor move direction
    lcd_byte(0x0C, LCD_CMD, fd); // 0x0F On, Blink Off
    lcd_byte(0x28, LCD_CMD, fd); // Data length, number of lines, font size
    lcd_byte(0x01, LCD_CMD, fd); // Clear display
    delayMicroseconds(500);
}
