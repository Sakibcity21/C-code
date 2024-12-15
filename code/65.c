#include <stdio.h>
void main() 
{
    int r,n,sum=0,count=0;
    float avg;
    printf("input any 10 no :");
    for (r=0;r<10;r++)
        {
            scanf("%d",&n);
            if(n%2==0)
                {
                        sum+=n;
                        count++;
                }
        }
    if(count==0)
        avg=0;
    else if(count==1)
        avg=count;
    else
        avg=sum/count;
    printf("\nsum is %d & avg of no : %f",sum,avg);
    printf("\n end");
}