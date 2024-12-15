#include<stdio.h>
void main()
    {
        int x,n,r,p;
        printf("\ninput value for X & N : ");
        scanf("%d%d",&x,&n);
        for(p=1,r=1;r<=n;r++)
            {
                p*=x;
            }
        printf("\n %d raise to %d is %d",x,n,p);
        printf("\nend");
    }

