#include<stdio.h>
void main() 
{
    int i,j,n;
    int count=1;
    printf("Enter the number of lines: ");    
    scanf("%d",&n);   
    for (i=1; i <=n; i++)
    {
        printf("\n");
        for (j=1; j<=i; j++) 
        {
            printf("%d",count%2);
            count++;
        }
        if (i%2==0)
            count=1;
        else
            count=0;
    }
    printf("\n");
}
