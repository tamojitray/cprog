#include <stdio.h>
void main()
{
    int i, j, rows;
    printf("Enter the number of lines: ");
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<i; j++)
        {
            printf("  ");
        }
        for(j=1; j<=(rows*2 -(2*i-1)); j++)
        {
            printf("$");
            printf(" ");
        }
        printf("\n");
    }
}
