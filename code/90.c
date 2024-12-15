#include<stdio.h>
int a,x;
void out()
    {
        int a=35;
        x=30;
        printf("\nin functiion");
        printf("\nX = %d",x);
        printf("\nA = %d",a);
    }
void main()
    {
        x=50;
        a=80;
        printf("\nbefore function");
        printf("\nX = %d",x);
        printf("\nA = %d",a);
        out();
        printf("\nafter function call");
        printf("\nX = %d",x);
        printf("\nA = %d",a);
        printf("\nend");
    }
