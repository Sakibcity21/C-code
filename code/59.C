#include<stdio.h>
void main()
    {
	int n,i;
	clrscr();
        for(n=1;n<=5;n++)
        {
            printf("\nenter any number : ");
            scanf("%d",&i);
            if(i%2==0)
                printf("\nthe number is even : ");
            else
                printf("\nthe number is odd : ");
        }
	printf("\nend");
	getch();
    }
