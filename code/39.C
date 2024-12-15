#include<stdio.h>
void main()
	{
	int bsal,ndp;
	float asal,pds,tsal,b;
	clrscr();
	printf("enter value for basic salary and no of days : ");
	scanf("%d%d",&bsal,&ndp);
	pds=bsal/30.0;
	asal=pds*ndp;
	if(bsal<1000)
		{
		    if(ndp<20)
			b=bsal*1.22;
            if(ndp>=20)
			b=bsal*1.28;
        }
    if(bsal>=1000)
		{
		    if(ndp<20)
			b=bsal*1.10;
            if(ndp>=20)
			b=bsal*1.50;
        }         
	tsal=asal+b;
	printf("\nactamt to pay : %f",tsal);
	getch();
	}