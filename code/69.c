#include<stdio.h>
void main()
    {
	int r;
	clrscr();
	printf("\n welcome ");
	for(r=0;r<5; r++)
	    {
		printf("\nhi");
		if(r>=2)
		    exit();
		printf("\nhello!");
	    }
    printf("\nhave a nice day ");
    printf("\nend\n");
    getch();
    }