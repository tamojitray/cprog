#include <stdio.h>
void main()
{
    int a,b,c=0;
    printf("Input the number of terms: ");
    scanf("%d", &a);
    printf("The square natural upto %d terms are: ", a);
    for (b=1; b<=a; b++)
    {
        printf("%d ", b*b);
        c=c+(b*b);
    }
    printf("\nThe sum of Square Natural Number upto %d terms: %d\n",a,c);
}
