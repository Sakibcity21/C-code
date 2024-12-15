#include<stdio.h>
void main()
	{
	 int x,n1,n2;
	 clrscr();
	 printf("enter a no. for : ");
	 scanf("%d",&x);
	 if(x>10)
		{
			printf("input any 2 no. ");
	 		scanf("%d%d",&n1,&n2);
			printf("Addition is : %d ",n1+n2);
		}
	printf("\n End of program");
	getch();
	}