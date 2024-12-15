#include<stdio.h>
void main()
	{
	 int r,ans;
    ans=1;
    r=1;
    while(r<=5)
		{
            ans*=r;
            r++;
        }
	 printf("\nresult=%d",ans);
	}