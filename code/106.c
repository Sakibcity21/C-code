#include <stdio.h>

void main() 
{
    int r,a[5],max;
    printf("input any 5 no :");
    for (r=0;r<5;r++)
        scanf("%d",&a[r]);
    max = a[0];
    for (r=0;r<5;r++)
        {
            if(a[r]>max)
                max = a[r];
        }
        printf("\n %d is max",max);         
    printf("\n end");
}