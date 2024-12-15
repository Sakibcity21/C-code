#include<stdio.h>
void main()
	{
	  int p,q;
	  float act;
	  clrscr();
	  printf("enter amount price and quntity : ");
	  scanf("%d%d",&p,&q);
	  act=p*q*0.9;
	  printf("your act amt to pay : %f",act);
	  getch();
	}