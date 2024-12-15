#include<stdio.h>
void main()
    {
	int n,i,res;
	clrscr();
        for(res=0,n=1;n<=5;n++)
        {
            printf("\nenter any number : ");
            scanf("%d",&i);
            res+=i;
        }
	printf("\nresult : %d\n",res);
	printf("\nend");
	getch();
    }
