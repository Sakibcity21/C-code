#include<stdio.h>
void main()
	{
	int bsal,ndp;
	float tsal,bamt,b;
	clrscr();
	printf ("enter value for basic salary and no of days : ");
	scanf("%d%d",&bsal,&ndp);
	if(ndp<20)
		b=0.10;
	else
		b=0.20;
	bamt=bsal*b;
	tsal=bsal/30.0*ndp+bamt;
	printf("\nactamt to pay : %f",tsal);
	getch();
	}