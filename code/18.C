#include<stdio.h>
void main()
	{
	 int bsal,ndp;
	 float pds,asal;
	 clrscr();
	 printf("enter basic salary and no. days pesent : ");
	 scanf("%d%d",&bsal,&ndp);
	 pds=bsal/30.0;
	 asal=pds*ndp;
	 if(ndp>20)
		asal=asal+6000;
	printf("actual salary is : %f",asal);
	getch();
	}