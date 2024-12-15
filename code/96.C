#include<stdio.h>
int calculate(int x,int n)
    {
        int p,r,f,ans;
        for(p=1,f=1,r=1;r<=n;r++)
            {
                p*=x;
                f*=r;
            }
        printf("\npower=%d & factorial =%d",p,f);
        ans=(float)p/f;
        return(ans);
    }
void main()
    {
        int x,n;
        float ans;
        printf("\ninput value for X & N : ");
        scanf("%d%d",&x,&n);
        ans=calculate(x,n);
        printf("\nresult = %d",ans);
        printf("\nend");
    }

