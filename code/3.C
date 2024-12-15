#include<stdio.h>
void main()
    {
     int a,b,c,s;
     float v;
     clrscr();
     printf("enter three numbers : ");
     scanf("%d%d%d",&a,&b,&c);
     s=a+b+c;
     v=s/3;
     printf("the sum of three numbers is : %d and average is : %f ",s,v);
     getch();
    }


