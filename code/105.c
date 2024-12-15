#include <stdio.h>

void main() 
{
    int r,a[10],n;
    printf("input any 10 no :");
    for (r=0;r<10;r++)
        scanf("%d",&a[r]);
    printf("\n input any to search :");
    scanf("%d",&n);
    for (r=0;r<10;r++)
        {
            if(n==a[r])
                break;
        }
    if(r==10)
        printf("\nNot found");
    else 
        printf("\n %d is present",n);
                
    printf("\n end");
}