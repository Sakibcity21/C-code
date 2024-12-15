#include<stdio.h>
void main()
	{
	  int s1,s2,ar;
	  float at,sa;
	  clrscr();
	  printf("enter value for s1 and s2: ");
	  scanf("%d%d",&s1,&s2);
	  at=0.5*s1*s2;
	  ar=s1*s2;
	  sa=ar-at;
	  printf("area of shaded part : %f",sa);
	  getch();
	}