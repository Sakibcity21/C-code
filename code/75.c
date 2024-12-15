#include<stdio.h>
void main()
	{
	 int n,b;
    n=263;
    do
		{
           b=n%10;
           n/=10;
           printf("\n%d",b);
    }while(n>0);
	printf("\nend");
	}