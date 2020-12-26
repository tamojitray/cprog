#include<stdio.h>
void main()
{
    int n,i,j,k=1;
    printf("Enter the no of lines: ");    
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
}
