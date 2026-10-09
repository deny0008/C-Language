#include <stdio.h>
#include <conio.h>

int main() {
    float base, hra, da, ta, gross;

    printf("Enter Base Salary: ");
    scanf("%f", &base);

    printf("Enter HRA percentage: ");
    scanf("%f", &hra);

    printf("Enter DA percentage: ");
    scanf("%f", &da);

    printf("Enter TA percentage: ");
    scanf("%f", &ta);

    gross = base + (base * hra / 100) + (base * da / 100) + (base * ta / 100);

    printf("Gross Salary: %0.2f", gross);

}