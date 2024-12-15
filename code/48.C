#incule<stdio.h>
void main() {
    int x;
    clrscr();
    printf("enter x: ");
    scanf("%d", &x);
    switch (x) {
        case 1: 
                printf("\nwelcome"); 
                break;
        case 4: 
                printf("\nhello");  
                break;
        case 5: 
                printf("\nhow are you?"); 
                break;
        case 10: 
                printf("\nhi!"); 
                break;
        case 12: 
                printf("\nvisit again");  
                break;
    }
    printf("\nend");
    getch();
    
}