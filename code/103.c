#include <stdio.h>

void main() 
{
    int r,a[10],sum;
    float avg;
    printf("input any 10 no :");
    for (r=0;r<10;r++)
        scanf("%d",&a[r]);
    for (sum=0,r=0;r<10;r++)
        {
            if(r>6)
                {
                    sum+=a[r];
                }
        }
    avg=sum/3.0;
    printf("\navg of odd no : %f",avg);
    printf("\n end");
}