#include <iostream>
#include <wiringPi.h>

int main() {

    printf("Getting raspberry Pi Info.\n");

    int major;
    int minor;
    wiringPiVersion(&major, &minor);
    printf("wiringPI version -> major: %d, minor: %d \n", major, minor);

    int model, rev, mem, maker, warranty;
    piBoardId (&model, &rev, &mem, &maker, &warranty);
    printf("PI board Id -> model: %d, rev: %d, mem: %d, maker: %d, warranty: %d \n", model, rev, mem, maker, warranty);

    return 0;
}
