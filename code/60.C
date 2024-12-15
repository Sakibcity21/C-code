#include<stdio.h>
void main()
    {
	int r,ans,n,res;
	clrscr();
        for(ans=0,r=1;r<=10;r+=2)
            ans+=r;
        printf("\nanswer : %d\n",ans);          
	for(res=1,n=1;n<=5;n++)
               res*=n;
	printf("\nresult : %d\n",res);
	printf("\nend");
	getch();
    }
