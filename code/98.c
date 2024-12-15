#include<stdio.h>
int calculatePower(int x,int n)
    {
        int p,r;
        for(p=1,r=1;r<=n;r++)
                p*=x;
        return(p);
    }
int calculateFactorial(int n)
    {
        int r,f;
        for(f=1,r=1;r<=n;r++)
                f*=r;
        return(f);
    }
float calculate(int x, int n)
    {
        int p,f;
        float ans;
        p=calculatePower(x,n);
        f=calculateFactorial(n);
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