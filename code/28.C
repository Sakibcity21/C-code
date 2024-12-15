#include<stdio.h>
void main()
	{
	int bsal,ndp;
	float asal,pds,tsal,bamt;
	clrscr();
	printf("enter value for basic salary and no of days : ");
	scanf("%d%d",&bsal,&ndp);
	pds=bsal/30.0;
	asal=pds*ndp;
	if(ndp<20)
		bamt=bsal*0.10;
	else
		bamt=bsal*0.20;
	tsal=asal+bamt;
	printf("\nactamt to pay : %f",tsal);
	getch();
	}