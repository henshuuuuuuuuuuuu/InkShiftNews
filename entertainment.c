#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "header.h"

int main() {
    int choice;
    loadingScreen();
    system("cls");
    header("ENTERTAINMENT");
    navBar();

    // Story 1
    printf(GRAY "╔════════════════════════════════════════════════╗\n" RESET);
    printf(GRAY "║" WHITE "  🎬 UNMARRY: ANGELICA & ZANJOE RETURN           " GRAY "║\n" RESET);
    printf(GRAY "╚════════════════════════════════════════════════╝\n" RESET);
    printf(GRAY "The Philippine film UnMarry stars Angelica Panganiban and Zanjoe Marudo\n"
               "in a powerful drama exploring annulment, forgiveness, and reconciliation\n"
               "in modern relationships. The movie has sparked conversations online,\n"
               "with viewers praising the nuanced performances and the socially relevant\n"
               "storyline. Critics note that it raises awareness about legal processes and\n"
               "emotional healing, making it one of the most talked-about films this season.\n\n" RESET);

    // Story 2
    printf(GRAY "╔════════════════════════════════════════════════╗\n" RESET);
    printf(GRAY "║" WHITE "  🎵 NIGHTSHIFT BAND BREAKS STREAMING RECORDS      " GRAY "║\n" RESET);
    printf(GRAY "╚════════════════════════════════════════════════╝\n" RESET);
    printf(GRAY "Indie band Nightshift has captivated audiences with their latest album,\n"
               "breaking streaming records in just 48 hours. Their music blends soulful\n"
               "lyrics with experimental beats, resonating with younger listeners.\n"
               "Fans highlight the band's ability to innovate while staying true to OPM\n"
               "roots. Concert tickets sold out within minutes, confirming their rising popularity.\n\n" RESET);

    // Story 3
    printf(GRAY "╔════════════════════════════════════════════════╗\n" RESET);
    printf(GRAY "║" WHITE "  🎥 LOCAL FILM FESTIVAL HIGHLIGHTS INDIE TALENT   " GRAY "║\n" RESET);
    printf(GRAY "╚════════════════════════════════════════════════╝\n" RESET);
    printf(GRAY "Cinemalaya and QCinema, two major Philippine film festivals, showcased indie\n"
               "filmmakers tackling social issues such as poverty, mental health, and climate\n"
               "change. Audiences engaged in lively discussions after screenings, praising\n"
               "creative storytelling and innovative production techniques. These festivals\n"
               "offer a platform for underrepresented voices and inspire a new generation\n"
               "of filmmakers to explore meaningful themes.\n\n" RESET);

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
