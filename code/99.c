#include <stdio.h>

void main() 
{
    int r,a[5];
    printf("input any no :");
    for (r=0;r<5;r++)
        scanf("%d",&a[r]);
    printf("the  no are:");
    for (r=0;r<5;r++)
        printf("\n%d",a[r]);
    printf("\n end");
}