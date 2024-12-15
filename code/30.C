#include<stdio.h>
void main()
	{
	int p,q;
	float actamt,a;
	clrscr();
	printf("enter value for price and quantity : ");
	scanf("%d%d",&p,&q);
	if(p*q<1000)
		a=0.90;
	else
		a=0.80;
	actamt=p*q*a;
	printf("\nactamt to pay : %f",actamt);
	getch();
	}