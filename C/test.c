// Write a program that converts 27 F to degress C using the formula
// C = (F -32)  / 1.8

#include <stdio.h>

int main() {
    
    float fahrenheit = 27.0;
    float celsius;

    
    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    printf("%.2f°F is equal to %.2f°C\n", fahrenheit, celsius);

    return 0;
}
