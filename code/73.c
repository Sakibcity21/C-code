#include<stdio.h>
void main()
    {
	int r,n,sum,count;
    printf("\ninput any number :");
	for(count=0,sum=0,r=0;r<10; r++)
	    {
            scanf("%d",&n);
		    if(r>=1 && n%2==0)
		        {
                    sum+=n;
                    count++;
                }

	    }
    printf("\navg of even no : %f",(float)sum/count);
    }