#include<stdio.h>
void main ()
    {
     int bsal;
     float pds;
     clrscr();
     printf("input value for Basic Salary : ");
     scanf("%d",&bsal);
     pds=bsal/30;
     printf("Per day salary is : %f",pds);
     getch();
    }