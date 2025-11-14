#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "header.h"

int main() {
    int choice;
    loadingScreen();
    system("cls");
    header("COMICS");
    navBar();

    // Story 1
    printf(GRAY "╔════════════════════════════════════════════════╗\n" RESET);
    printf(GRAY "║" WHITE "  📖 TEACHER JUN EDUCATIONAL COMIC                 " GRAY "║\n" RESET);
    printf(GRAY "╚════════════════════════════════════════════════╝\n" RESET);
    printf(GRAY "Teacher Jun's educational comic series simplifies complex topics such as\n"
               "international maritime disputes, history, and civic responsibility. Through\n"
               "humor, illustrations, and clear explanations, young readers can learn about\n"
               "important national issues while staying engaged and entertained.\n\n" RESET);

    // Story 2
    printf(GRAY "╔════════════════════════════════════════════════╗\n" RESET);
    printf(GRAY "║" WHITE "  😸 KOKO THE CAT: MISCHIEF & FUN                  " GRAY "║\n" RESET);
    printf(GRAY "╚════════════════════════════════════════════════╝\n" RESET);
    printf(GRAY "Koko, the mischievous cat, brings laughter to readers through comic strips\n"
               "showcasing his everyday adventures, pranks, and unpredictable antics. Fans\n"
               "appreciate the lighthearted humor, making it a favorite comic for all ages.\n\n" RESET);

    // Story 3
    printf(GRAY "╔════════════════════════════════════════════════╗\n" RESET);
    printf(GRAY "║" WHITE "  🖌 INDIE COMICS SHOWCASE SOCIAL ISSUES           " GRAY "║\n" RESET);
    printf(GRAY "╚════════════════════════════════════════════════╝\n" RESET);
    printf(GRAY "Independent comic artists in the Philippines are producing stories focused\n"
               "on social issues such as poverty, climate change, and student life. These\n"
               "comics creatively engage readers, raising awareness while promoting local\n"
               "art and storytelling talent. Exhibitions and online platforms give these\n"
               "creators visibility and help them influence cultural dialogue.\n\n" RESET);

    printf(WHITE "Next page (0‑6): " RESET);
    scanf("%d",&choice);
    switch(choice){
        case 1: system("home"); break;
        case 2: system("editorial"); break;
        case 3: system("entertainment"); break;
        case 4: system("sports"); break;
        case 5: system("fashion"); break;
        case 6: system("comics"); break;
        case 0: exit(0);
        default: printf(RED "Invalid! Back to menu…" RESET); usleep(500000);
    }
    return 0;
}
