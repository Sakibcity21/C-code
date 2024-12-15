#include<stdio.h>
void out()
    {
        int a;
        a=10;
        printf("\nin functiion");
        printf("\nA = %d",a);
    }
void main()
    {
        int a,b;
        a=20;
        b=50;
        printf("\nbefore function");
        printf("\nA = %d",a);
        printf("\nB = %d",b);
        out();
        printf("\nafter function call");
        printf("\nA = %d",a);
        printf("\nB = %d",b);
        printf("\nend");
    }
