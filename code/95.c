#include<stdio.h>
void avgOfDigit(int n)
    {
        int b,sum=0,count=0;
        float avg;
        do
            {
                b=n%10;
                n/=10;
                sum+=b;
                count++;
        }while(n>0);
        printf("\nresult = %f",(float)sum/count);
    }
void main()
    {
        int n;
        printf("\ninput value for N : ");
        scanf("%d",&n);
        avgOfDigit(n);
        printf("\nend");
    }