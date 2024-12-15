#include<stdio.h>
void calculate(int x,int n)
    {
        int p,r,f;
        for(p=1,f=1,r=1;r<=n;r++)
            {
                p*=x;
                f*=r;
            }
        printf("\npower=%d & factorial =%d",p,f);
        printf("\nresult = %f",(float)p/f);
    }
void main()
    {
        int x,n;
        printf("\ninput value for X & N : ");
        scanf("%d%d",&x,&n);
        calculate(x,n);
        printf("\nend");
    }

