#include<stdio.h>
void main()
    {
	int r,n,sum;
	for(sum=0,r=0;r<10; r++)
	    {
		printf("\ninput any number :");
            scanf("%d",&n);
		if(r<=6)
		    continue;
		    sum+=n;
	    }
    printf("\navg of last 3 no : %f",(float)sum/3.0);
    }