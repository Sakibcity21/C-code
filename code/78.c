#include<stdio.h>
void main()
	{
	    int a,n,b,cou,ld,fd;
        float avg;
        printf("enter any no : ");
        scanf("%d",&n);
        a=0,cou=0;
        if(n<10)
            avg=n;
        else
            {
                n%=100;
                ld=n%10;
                fd=n/10;
                avg=(ld+fd)/2.0;
            }
    printf("\navg of last digits is %f",avg);
	printf("\nend");
	}