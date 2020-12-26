#include <stdio.h>
void main()
{   
    int n1,n,p=1,dec=0,i=1,j,d,ocno=0,dn;
    printf("Convert Binary to Octal\n");
    printf("-----------------------\n");
	printf("Input a binary number (using digit 0 and 1): ");
	scanf("%d",&n);
	n1=n;
	for (j=n;j>0;j=j/10)
	{  
        d=j%10;
        if(i==1)
            p=p*1;
        else
            p=p*2;
	   dec=dec+(d*p);
	   i++;
	}
    dn=dec;
    i=1;
    for(j=dec;j>0;j=j/8)
    {
        ocno=ocno+(j%8)*i;
        i=i*10;
        n=n/8;
    }
    printf("The Binary Number: %d\nThe equivalent Octal Number: %d\n",n1,ocno);
}
