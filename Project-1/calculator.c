#include <stdio.h>
#include <conio.h>

int main() {
    float cels, fahren;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &cels);

    fahren = (9.0/5.0 * cels) + 32;

    printf("Temperature in Fahrenheit: %0.1f", fahren);

}