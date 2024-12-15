#include<stdio.h>
void main()
    {
     int p,q,a;
     float d,act;
     clrscr();
     printf("enter amount for price and quantity : ");
     scanf("%d%d",&p,&q);
     a=p*q;
     d=a*0.1;
     act=a-d;
     printf("your actul amount to pay is : %f ",act);
     getch();
    }
