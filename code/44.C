#include<stdio.h>
void main()
	{
	 int n1,n2,n3,max;
	 clrscr();
	 printf("enter any three no. :");
	 scanf("%d%d%d",&n1,&n2,&n3);
	 if(n1>n2)
		{
		 max=n2;
		 if(n1>n3)
			max=n1;
		}
	 if(n2>n1)
		{
		 max=n3;
		 if(n2>n3)
			max=n2;
		}
	 printf("max is : %d",max);
	 getch();
	}
