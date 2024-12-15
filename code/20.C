#include<stdio.h>
void main()
	{
	 int p,q;
	 float A;
	 clrscr();
	 printf("enter amount for price and quntity : ");
	 scanf("%d%d",&p,&q);
	 A=p*q;
	 if(A>1000)
		A=A*0.9;
	 printf("Amount to pay :%f",A);
	 getch();
	}