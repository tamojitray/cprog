#include <stdio.h>
void main()
{   
    int n1, n5,p=1,k,ch=1;
	int dec=0,i=1,j,d;
    printf("Convert Octal to Decimal\n");
    printf("------------------------\n");
	printf("Input an octal number (using digit 0 - 7): ");
	scanf("%d",&n1);
	n5=n1;
    for(;n1>0;n1=n1/10)
    {
       k=n1 % 10;
       if(k>=8) 
       { 
        ch=0;
       }
     }
    switch(ch)
    {
    case 0 :
        printf("The number is not an octal number.\n");
        break;
    case 1:
        n1=n5;
	for (j=n1;j>0;j=j/10)
	{  
          d = j % 10;
            if(i==1)
                  p=p*1;
            else
                 p=p*8;

	   dec=dec+(d*p);
	   i++;
	}
        printf("The Octal Number: %d\nThe equivalent Decimal Number: %d\n",n5,dec);
        break;
    }
}
