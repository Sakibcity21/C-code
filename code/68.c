#include<stdio.h>
void main()
    {
        int x,n,p,r,f;
        printf("\ninput value for X & N : ");
        scanf("%d%d",&x,&n);
        for(p=1,f=1,r=1;r<=n;r++)
            {
                p*=x;
                f*=r;
            }
        printf("\npower=%d & factorial =%d",p,f);
        printf("\nresult = %f",(float)p/f);
        printf("\nend");
    }

