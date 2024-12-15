#include <stdio.h>

void main() 
{
    int r,a[10];
    printf("input any 10 no :");
    for (r=0;r<10;r++)
        scanf("%d",&a[r]);
    printf("the  no are:");
    for (r=0;r<10;r++)
        {
            if(a[r]%2==0)
                printf("\n%d",a[r]);
            else
                printf("\n%d",a[r]);
        }
    printf("\n end");
}