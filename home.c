#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "header.h"

int main() {
    int choice;
    loadingScreen();
    system("cls");
    header("HOME");
    navBar();

    // Story 1
    printf(GRAY "╔════════════════════════════════════════════════╗\n" RESET);
    printf(GRAY "║" WHITE "  📰 PHILIPPINES TO RECEIVE 2ND BATCH OF BRAHMOS  " GRAY "║\n" RESET);
    printf(GRAY "╚════════════════════════════════════════════════╝\n" RESET);
    printf(GRAY "The Philippine Department of National Defense has confirmed the arrival of a second batch\n"
               "of BrahMos supersonic cruise missiles from India. This deployment is part of the ongoing\n"
               "modernization of the Armed Forces of the Philippines, aiming to strengthen coastal security\n"
               "and deter potential maritime threats. The BrahMos missiles, capable of reaching targets up\n"
               "to 290 kilometers away, will be stationed in strategic positions along the country's northern\n"
               "and western coasts. Experts note that this initiative could significantly enhance the Philippines'\n"
               "defense capabilities and serve as a clear signal to neighboring nations about the country's\n"
               "commitment to safeguarding its territorial waters. Citizens and officials alike are closely\n"
               "watching how this upgrade will impact national security policies in the coming months.\n\n" RESET);

    // Story 2
    printf(GRAY "╔════════════════════════════════════════════════╗\n" RESET);
    printf(GRAY "║" WHITE "  📰 TYPHOON FUNG-WONG HITS PHILIPPINES           " GRAY "║\n" RESET);
    printf(GRAY "╚════════════════════════════════════════════════╝\n" RESET);
    printf(GRAY "Typhoon Fung-Wong swept across the northern regions of the Philippines, displacing\n"
               "over a million residents in low-lying communities. Evacuation centers were immediately\n"
               "established, though many citizens expressed frustration at perceived delays in local\n"
               "disaster response. Roads and infrastructure suffered significant damage, complicating\n"
               "relief efforts. Authorities continue to urge the public to prepare for floods and landslides\n"
               "while relief organizations coordinate emergency supplies. Amid the crisis, many citizens\n"
               "have stepped up to volunteer and provide aid, demonstrating community solidarity and resilience.\n\n" RESET);

    // Story 3
    printf(GRAY "╔════════════════════════════════════════════════╗\n" RESET);
    printf(GRAY "║" WHITE "  📰 DIGITAL LEARNING EXPANDS IN PUBLIC SCHOOLS    " GRAY "║\n" RESET);
    printf(GRAY "╚════════════════════════════════════════════════╝\n" RESET);
    printf(GRAY "The Department of Education, in collaboration with Globe Telecom and Microsoft,\n"
               "has launched an ambitious program to bring AI-powered digital learning tools\n"
               "to public school students nationwide. The initiative includes tablets, high-speed\n"
               "internet access, and software that allows teachers to create personalized learning\n"
               "plans. Training sessions for educators are underway to ensure they can effectively\n"
               "integrate AI into classrooms, providing individualized support for students. Officials\n"
               "hope this program will bridge educational gaps, especially for learners in remote\n"
               "or underserved areas, while promoting a culture of digital literacy and innovation.\n\n" RESET);

    printf(WHITE "Next page (0‑6): " RESET);
    scanf("%d", &choice);
    switch (choice) {
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
