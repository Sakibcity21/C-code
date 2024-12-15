#include<stdio.h>

void calculate()
    {
        int x,y,z;
        x=10;
        y=x*2;
        z=x*y;
        printf("\nans %d",z);
    }
void main()
    {
        printf("\nfrist time");
        calculate();
        printf("\nsecond time");
        calculate();
        printf("\nend");
    }
