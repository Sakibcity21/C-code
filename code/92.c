#include<stdio.h>
void calculate(int m)
    {
        int y,z;
        y=m+5;
        z=m*y;
        printf("\nans %d",z);
    }
void main()
    {
        int x,w;
        printf("\nwith x");
        x=10;
        calculate(x);
        printf("\nwith w");
        w=25;
         calculate(w);
        printf("\nend");
    }

