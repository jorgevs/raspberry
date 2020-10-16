#include <iostream>
#include <wiringPi.h>

// LED Pin - wiringPi pin 0 is BCM_GPIO 17.

#define LED 24

int main() {
    std::cout << "Hello, World!" << std::endl;

    printf("Raspberry Pi blink\n");

    wiringPiSetup();
    pinMode(LED, OUTPUT);

    for (;;) {
        digitalWrite(LED, HIGH);  // On
        delay(500);   // mS
        digitalWrite(LED, LOW); // Off
        delay(500);
    }
    return 0;
}
