#include<stdio.h>
void main()
	{
	 int n1,n2,max;
	 clrscr();
	 printf("input any 2 no. : ");
	 scanf("%d%d",&n1,&n2);
	 if(n1>n2)
		max=n1;
	 else
		max=n2;
	 printf("\nmax : %d",max);
	 printf("\nend");
	 getch();
	}