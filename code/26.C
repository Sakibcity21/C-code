#include<stdio.h>
void main()
	{
	int h;
	clrscr();
	printf("enter value for h : ");
	scanf("%d",&h);
	if(h<20)
		printf("\nhi!");
	else
		printf("\nhello!");
	printf("\nend");
	getch();
	}