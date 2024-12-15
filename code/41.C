#include<stdio.h>
void main()
	{
	 int tm;
	 float per;
	 clrscr();
	 printf("enter marks out of 500 : ");
	 scanf("%d",&tm);
	 per=tm/5.0;
	 if(per<45)
		printf("\n fail");
	 if(per>=45)
		{
		 if(per<60)
			printf("\n pass class");
		}
	 if(per>=60)
		{
		 if(per<66)
			printf("\n frist class");
		}
	 if(per>=66)
		printf("\n frist class with distingtion");
	getch();
	}



