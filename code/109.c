#include<stdio.h>
void main() 
{
    int r,a[10],b,n,add;
    float avg;
    printf("input any 10 no :");
    for (r=0;r<10;r++)
            scanf("%d",&a[r]);
    for (add=0,r=0;r<10;r++)
        {
            n=a[r];
            do
                {
                    b=n%10;
                    n/=10;
                    add+=b;
            }while(n>0);
            printf("\nno is %d and add is %d",a[r],add);
            n=0;
        }
    printf("\n end");
}