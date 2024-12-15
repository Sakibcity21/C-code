#include<stdio.h>
void main()
	{
	    int a,n,b,cou;
        printf("enter any no : ");
        scanf("%d",&n);
        a=0,cou=0;
    do
		{
            b=n%10;
            n/=10;
            a+=b;
            cou++;
    }while(n>0);
    printf("\naddtion of digits is %d",a);
    printf("\ncou %d",cou);
    printf("\navg of digits is %f",(float)a/cou);
	printf("\nend");
	}