#include<stdio.h>
void main()
    {
     int bsal,d;
     float psal,pds;
     clrscr();
     printf("enter the basic salary and no. of days present : ");
     scanf("%d%d",&bsal,&d);
     pds=bsal/30.0;
     psal=pds*d;
     printf("total salary to pay is : %f",psal);
     getch();
    }

