#include <stdio.h>

void main() 
{
    int r,a[5],max,min;
    printf("input any 5 no :");
    for (r=0;r<5;r++)
        scanf("%d",&a[r]);
    max = a[0];
    min = a[0];
    for (r=0;r<5;r++)
        {
            if(a[r]<min)
                min = a[r];
            if(a[r]>max)
                max = a[r];
        }
    printf("\n the diff %d ",max - min);         
    printf("\n end");
}