#include <stdio.h>

int main()
{
    int num, first, last, sum;

    printf("Enter any number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        num = -num;
    }

    last = num % 10;

    while (num >= 10)
    {
        num = num / 10;
    }

    first = num;
    sum = first + last;

    printf("The sum of the first and last digit: %d", sum);

    return 0;
}