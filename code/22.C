#include <stdio.h>
void main()
	{
	 int bsal;
	 float tsal,camt;
	 clrscr();
	 printf("enter basic salary : ");
	 scanf("%d",&bsal); /*
	 if(bsal<5000)
		{
		camt=bsal*0.15;
		}
	 tsal=bsal+camt;*/
	 tsal=bsal;
	 if(bsal<5000)
		tsal=tsal*1.15;
	 printf("salary to pay : %f",tsal);
	 getch();
	}