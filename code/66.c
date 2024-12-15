#include <stdio.h>
void main() 
{
    int r,n,ans;
    printf("input any no :");
    scanf("%d",&n);
    for (ans=1,r=1;r<=n;r++)
        ans *= r;
    printf("\nno is %d and fatorial of no : %d",n,ans);
    printf("\n end");
}