#include<stdio.h>
void main() {
    char x,a,e,i,o,u;
    clrscr();
    printf("enter alphabate: ");
    scanf("%c", &x);
    switch (x) {
	case 'a':
			printf("\nwelcome");
			break;
	case 'e':
		printf("\nhello");
		break;
	case 'i':
		printf("\nhow are you?");
		break;
	case 'o':
		printf("\nhi!");
		break;
	case 'u':
		printf("\nvisit again");
		break;
    }
    printf("\nend");
    getch();

}