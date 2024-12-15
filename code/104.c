#include <stdio.h>

void main() 
{
    int r,a[10],s1=0,s2=0,c1=0,c2=0;
    printf("input any 10 no :");
    for (r=0;r<10;r++)
        {
            scanf("%d",&a[r]);
            if(a[r]%2==0)
                {
                    s1+=a[r];
                    c1++;
                }
            else
                {
                    s2+=a[r];
                    c2++;
                }
        }
    printf("the avg of even is :%f & the avg of even is :%f",(float)s1/c1,(float)s2/c2);
    printf("\n end");
}