#include<stdio.h>
int avgOfDigit(int n)
    {
        int b,sum=0,count=0;
        do
            {
                b=n%10;
                n/=10;
                sum+=b;
                count++;
        }while(n>0);
        return((float)sum/count);
    }
void main()
    {
        int n;
        float res;
        printf("\ninput value for N : ");
        scanf("%d",&n);
        res=avgOfDigit(n);
        printf("\nresult = %f",res);
        printf("\nend");
    }