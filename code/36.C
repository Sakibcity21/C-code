#include<stdio.h>
void main()
	{
	 int p,q;
	 float amt;
	 clrscr();
	 printf("input value foe price and quantity : ");
	 scanf("%d%d",&p,&q);
	 amt=p*q;
	 if(amt<1000)
		{
		 if(q<2)
			amt=amt*0.90;
		 if(q>=2)
			amt=amt*0.85;
		}
	 if(amt>=1000)
		{
		 if(q<2)
			amt=amt*0.78;
		 if(q>=2)
			amt=amt*0.72;
		}
	 printf("\n amt to pay : %f",amt);
	 getch();
	}