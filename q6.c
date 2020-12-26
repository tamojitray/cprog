#include <stdio.h>
void main()
{

    float a, b, c, d, e;
    float f = 0;
    printf("Input the first number of the G.P. series: ");
    scanf("%f", &a);
    printf("Input the number of terms in the G.P. series: ");
    scanf("%f", &b);
    printf("Input the common ratio of G.P. series: ");
    scanf("%f", &c);
    printf("The numbers for the G.P. series: \n");
    for(e = 0; e < b; e++)
    {
        printf("%f ", a);
        f = f + a;
        a = a * c;
    }
    printf("\nThe Sum of the G.P. series: %f\n", f);
}
