#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main() {
    int choice;
    
    while (1) {
        system("cls"); // or "clear" if using Linux/Mac
        header("MENU");
        navBar();
        
        printf(WHITE "Choose a page (0‑6): " RESET);
        if (scanf("%d", &choice) != 1) {
            getchar(); // clear invalid input
            continue;
        }
        
        switch (choice) {
            case 1:
                system("home");          // opens home.c compiled as 'home.exe' (Windows)
                break;
            case 2:
                system("editorial");     // opens editorial.c compiled as 'editorial.exe'
                break;
            case 3:
                system("entertainment"); // opens entertainment.c compiled as 'entertainment.exe'
                break;
            case 4:
                system("sports");        // opens sports.c compiled as 'sports.exe'
                break;
            case 5:
                system("fashion");       // opens fashion.c compiled as 'fashion.exe'
                break;
            case 6:
                system("comics");        // opens comics.c compiled as 'comics.exe'
                break;
            case 0:
                printf(RED "\nThanks for visiting InkShift News! See you again.\n" RESET);
                exit(0);
            default:
                printf(RED "\nInvalid choice. Try again.\n" RESET);
                usleep(500000);
        }
    }
    
    return 0;
}
