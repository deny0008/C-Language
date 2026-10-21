#include<stdio.h>
#include<conio.h>

int main()
{
    char grade;

    printf("Enter grade (A/B/C/D/F):");
    scanf("%c",&grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent");
        break;
    
        case 'B':
        printf("Very Good");
        break;

        case 'C':
        printf("Good");
        break;

        case 'D':
        printf("Pass");
        break;

        case 'F':
        printf("Fail");
        break;

    default:
        printf("Invalid Grade");
        break;
    }
}