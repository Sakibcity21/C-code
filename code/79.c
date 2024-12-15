#include<stdio.h>
void main()
	{
	    int a,r,n,b,ans;
        printf("enter any no : ");
        scanf("%d",&n);
        a=0;
    do
		{
            b=n%10;
            n/=10;
            for(ans=1,r=1;r<=b;r++)
                ans*=r;
            printf("\ndigits is %d & its factorial is %d ",b,ans);
    }while(n>0);
	printf("\nend");
	}