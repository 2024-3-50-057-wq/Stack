#include<stdio.h>

int main(void){
    
    int choice;
    
    while(1){
        printf("\nMENU: \n1. Coffee. \n2. Tea. \n3. Bye.");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
                    printf("Enjoy your coffee!\n");
                } else if (choice == 2) {
                    printf("Enjoy your tea!\n");
                } else if (choice == 3) {
                    printf("Bye!\n");
                    break;
                } else {
                    printf("Invalid choice. Please choose 1, 2, or 3.\n");
                }
    }
    
    return 0;
    
}

