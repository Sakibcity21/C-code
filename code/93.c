#include<stdio.h>
void calculate(int n)
    {
        int r,f;
        for(f=1,r=2;r<=n;r++)
            f*=r;
        printf("\nN=%d & factorial =%d",n,f);
    }
void main()
    {
        int n;
        printf("\ninput any no : ");
        scanf("%d",&n);
        calculate(n);
        printf("\nend");
    }

