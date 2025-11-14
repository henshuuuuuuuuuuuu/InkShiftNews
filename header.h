#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <unistd.h> // for usleep
#include <stdlib.h>

// Color codes (Theme B)
#define RESET   "\x1b[0m"
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define WHITE   "\x1b[37m"
#define GRAY    "\x1b[90m"

// ASCII Header/Banner
void header(char *title) {
    printf(CYAN "╔════════════════════════════════════════════════╗\n" RESET);
    printf(CYAN "║" WHITE "                InkShift News                     " CYAN "║\n" RESET);
    printf(CYAN "║" WHITE "                   %s                       " CYAN "║\n" RESET, title);
    printf(CYAN "╚════════════════════════════════════════════════╝\n\n" RESET);
}

// Navigation Bar
void navBar() {
    printf(YELLOW "Menu: [1] Home  [2] Editorial  [3] Entertainment  [4] Sports  [5] Fashion  [6] Comics  [0] Exit\n\n" RESET);
}

// Loading Screen Animation
void loadingScreen() {
    char *loadingText = "Loading InkShift News";
    printf(GREEN);
    for(int i=0; i<3; i++){
        for(int j=0; j<strlen(loadingText); j++){
            printf("%c", loadingText[j]);
            fflush(stdout);
            usleep(50000);
        }
        printf(".");
        usleep(200000);
        printf("\r"); // return to start of line
        for(int k=0; k<strlen(loadingText)+1; k++) printf(" "); // clear line
        printf("\r");
    }
    printf(RESET);
}

#endif
