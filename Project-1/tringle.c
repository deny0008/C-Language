#include <stdio.h>
#include <conio.h>

int main()
{
    int angle, angle2, angle3;

    printf("Enter First Angle:");
    scanf("%d", &angle);

    printf("Enter Second Angle:");
    scanf("%d", &angle2);

    angle3 = 180 - (angle + angle2);
    
    printf("Third Angle:%d", angle3);
}