#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j;
    int row, col, sum = 0;

    printf("Enter the array's row size: ");
    scanf("%d", &r);

    printf("Enter the array's column size: ");
    scanf("%d", &c);

    printf("\nEnter array's elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter row number: ");
    scanf("%d", &row);

    sum = 0;

    printf("Elements of row %d: ", row);

    for(j = 0; j < c; j++)
    {
        printf("%d, ", a[row][j]);
        sum = sum + a[row][j];
    }

    printf("\nThe sum of row %d: %d\n", row, sum);

    printf("\nEnter column number: ");
    scanf("%d", &col);

    sum = 0;

    printf("Elements of column %d: ", col);

    for(i = 0; i < r; i++)
    {
        printf("%d, ", a[i][col]);
        sum = sum + a[i][col];
    }

    printf("\nThe sum of column %d: %d", col, sum);

    return 0;
}
