#include<stdio.h>
void main()
	{
	 int a,n,b;
    n=348;
    a=0;
    do
	 {
       b=n%10;
       n/=10;
       a+=b;
    }while(n>0);
    printf("\naddtion of digits is %d",a);
	printf("\nend");
	}