#include <stdio.h>

void main() 
{
    int r,a[10],sum,count=0;
    float avg;
    printf("input any 10 no :");
    for (r=0;r<10;r++)
        scanf("%d",&a[r]);
    for (r=0;r<10;r++)
        {
            if(a[r]%2==1)
                {
                    sum+=a[r];
                    count++;
                }
        }
    if(count==0)
        avg=0;
    else if(count==1)
        avg=count;
    else
        avg=sum/count;
    printf("\navg of odd no : %f",avg);
    printf("\n end");
}