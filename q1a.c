#include<stdio.h>
int main()
{
    int j,i,n,k=0;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++,k=0)
    {
        for(j=1;j<=n-i;j++)
        printf(" ");
        while(k!=2*i-1)
        {
            printf("$");
            ++k;
        }
        printf("\n");
    }
}
