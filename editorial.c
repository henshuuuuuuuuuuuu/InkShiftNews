#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "header.h"

int main() {
    int choice;
    loadingScreen();
    system("cls");
    header("EDITORIAL");
    navBar();

    // Story 1
    printf(GRAY "╔════════════════════════════════════════════════╗\n" RESET);
    printf(GRAY "║" WHITE "  ✒ AI IN SCHOOLS: BOON OR BURDEN?               " GRAY "║\n" RESET);
    printf(GRAY "╚════════════════════════════════════════════════╝\n" RESET);
    printf(GRAY "Artificial intelligence is being integrated into classrooms across the\n"
               "Philippines, promising to tailor lessons for individual students and help\n"
               "teachers identify learning gaps. While the technology can enhance learning\n"
               "efficiency, critics argue that unequal access to AI tools may widen educational\n"
               "inequality. This editorial calls for careful policy planning, ensuring that\n"
               "privacy, affordability, and teacher training are prioritized before scaling AI\n"
               "implementation nationwide.\n\n" RESET);

    // Story 2
    printf(GRAY "╔════════════════════════════════════════════════╗\n" RESET);
    printf(GRAY "║" WHITE "  ✒ DISASTER MANAGEMENT & ACCOUNTABILITY         " GRAY "║\n" RESET);
    printf(GRAY "╚════════════════════════════════════════════════╝\n" RESET);
    printf(GRAY "After repeated typhoon damage, public trust in government disaster response\n"
               "remains fragile. While authorities organize evacuations and relief, infrastructure\n"
               "weaknesses exacerbate the crisis. Editorial writers urge citizens to engage with\n"
               "local councils, monitor spending, and demand transparent disaster management\n"
               "plans. Civic participation is presented as a key tool to improve governance\n"
               "and reduce human and economic losses during emergencies.\n\n" RESET);

    // Story 3
    printf(GRAY "╔════════════════════════════════════════════════╗\n" RESET);
    printf(GRAY "║" WHITE "  ✒ YOUTH & CIVIC ENGAGEMENT                     " GRAY "║\n" RESET);
    printf(GRAY "╚════════════════════════════════════════════════╝\n" RESET);
    printf(GRAY "Philippine students increasingly use social media platforms to campaign for\n"
               "social and environmental causes, from climate change to education reforms.\n"
               "While digital activism can be powerful, responsible usage is crucial to prevent\n"
               "misinformation and polarization. This editorial emphasizes empowering youth\n"
               "with civic knowledge and critical thinking skills, encouraging them to influence\n"
               "policy and community initiatives positively.\n\n" RESET);

    printf(WHITE "Next page (0‑6): " RESET);
    scanf("%d", &choice);
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
