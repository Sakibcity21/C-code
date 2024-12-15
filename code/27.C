#include<stdio.h>
void main()
	{
	int p,q;
	float actamt;
	clrscr();
	printf("enter value for price and quantity : ");
	scanf("%d%d",&p,&q);
	if(p*q<1000)
		actamt=p*q*0.9;
	else
		actamt=p*q*0.8;
	printf("\nactamt to pay : %f",actamt);
	getch();
	}