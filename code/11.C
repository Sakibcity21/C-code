#include<stdio.h>
void main()
	{
	 int h,s1,s2,ar;
	 float at,sa;
	 clrscr();
	 printf("enter value for s1,s2 and h :");
	 scanf("%d%d%d",&s1,&s2,&h);
	 at=0.5*h*s2;
	 ar=s1*s2;
	 sa=ar+at;
	 printf("area is : %f",sa);
	 getch();
	}