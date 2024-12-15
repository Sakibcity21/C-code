#include<stdio.h>
void main()
	{
	 int n1,n2;
	 clrscr();
	 printf("input any 2 no. : ");
	 scanf("%d%d",&n1,&n2);
	 if(n1>n2)
		 printf("\nmax : %d",n1);
	 else
		 printf("\nmax : %d",n2);
	 printf("\nend");
	 getch();
	}