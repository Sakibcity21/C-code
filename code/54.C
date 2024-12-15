#include<stdio.h>
void main()
       /*	{
	 int a,b,c,d,e;
	 clrscr();
	 a=7;
	 b=a++;
	 c=++a;
	 d=b + a++;
	 e=c + ++b;
	 printf("\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e);
	 getch();
	}
	{
	 int a,b,c,d,e;
	 clrscr();
	 a=10;
	 b=a--;
	 c=--a;
	 d=b + a--;
	 e=c + --b;
	 printf("\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e);
	 getch();
	}*/
	{
	 int n,m,h,j;
	 clrscr();
	 n=15;
	 n-=4;
	 m=n++;
	 h=m++ + --n;
	 j=h + n--;
	 h+=6;
	 printf("\n%d\n%d\n%d\n%d",n,m,h,j);
	 getch();
	}