#include<stdio.h>
int a;
void out()
    {
        int a=35;
        printf("\nin functiion");
        printf("\nA = %d",a);
    }
void main()
    {
        int x=50;
        a=30;
        printf("\nbefore function");
        printf("\nX = %d",x);
        printf("\nA = %d",a);
        out();
        printf("\nafter function call");
        printf("\nX = %d",x);
        printf("\nA = %d",a);
        printf("\nend");
    }
