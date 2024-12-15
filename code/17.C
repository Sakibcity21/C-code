#include<stdio.h>
void main()
	{
	 int n1,n2,d;
	 clrscr();
	 printf("input any 2 no. : ");
	 scanf("%d%d",&n1,&n2);
	 d=n1-n2;
	 if(d<0)
		d=d*-1;
	 printf("Diff=%d",d);
	 getch();
	}