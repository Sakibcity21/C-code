#include<stdio.h>
void main()
	{
	 int n,r;
	 clrscr();
	 printf("input any number :");
	 scanf("%d",&n);
	 r=n%2;
	 if(r==0)
		printf("\n %d is even",n);
	 else
		printf("\n %d is odd",n);
	 printf("\n end");
	 getch();
	}