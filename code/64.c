#include<stdio.h>
void main()
    {
        int r,n,res;
        float avg;
        printf("inter any no :");
        for(r=0,res=0;r<10;r++)
        {
            scanf("%d",&n);
            res+=n;
        }
        avg=res/10.0;
        printf("\nAverage of given numbers is : %f",avg);
    }