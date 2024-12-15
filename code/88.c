#include<stdio.h>
int x;
void show()
    {
        x=20;
        printf("\nin functiion");
        printf("\nX = %d",x);
    }
void main()
    {
        x=30;
        printf("\nbefore function");
        printf("\nX = %d",x);
        show();
        printf("\nafter function call");
        printf("\nX = %d",x);
        printf("\nend");
    }
