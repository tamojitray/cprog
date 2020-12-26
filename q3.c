#include <stdio.h>
void main() 
{
    int a, n, d, i;
    int sum = 0;
    printf("Input the starting number of the A.P. series: ");
    scanf("%d", &a);
    printf("Input the number of items for the A.P. series: ");
    scanf("%d", &n);
    printf("Input the common difference of A.P. series: ");
    scanf("%d", &d);
    printf("The Sum of the A.P. series are: \n");
    for(i = 1; i <= n; i++)
    {
        if (i!=n)
        {
            printf("%d  + ", a);
            sum = sum + a;
            a = a + d;
        }
        else
        {
            sum=sum+a;
            printf("%d = %d \n",a,sum);
        }
    }
}
