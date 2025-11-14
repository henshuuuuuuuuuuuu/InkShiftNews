#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "header.h"

int main() {
    int choice;
    loadingScreen();
    system("cls");
    header("FASHION");
    navBar();

    // Story 1
    printf(GRAY "╔════════════════════════════════════════════════╗\n" RESET);
    printf(GRAY "║" WHITE "  👗 STREETWEAR INSPIRED BY GEOPOLITICS          " GRAY "║\n" RESET);
    printf(GRAY "╚════════════════════════════════════════════════╝\n" RESET);
    printf(GRAY "Filipino designers are blending streetwear with subtle geopolitical themes.\n"
               "Ocean waves, national symbols, and historical motifs are incorporated into\n"
               "t-shirts, hoodies, and accessories, reflecting resilience and cultural pride.\n"
               "These collections have captured the imagination of youth and global fashion\n"
               "enthusiasts, sparking conversations about identity and awareness through clothing.\n\n" RESET);

    // Story 2
    printf(GRAY "╔════════════════════════════════════════════════╗\n" RESET);
    printf(GRAY "║" WHITE "  ♻ ECO-FASHION ON THE RISE                       " GRAY "║\n" RESET);
    printf(GRAY "╚════════════════════════════════════════════════╝\n" RESET);
    printf(GRAY "Sustainable fashion is gaining momentum in the Philippines. Designers are\n"
               "creating clothing from upcycled fabrics, promoting slow-fashion practices,\n"
               "and emphasizing environmental responsibility. Consumers are increasingly\n"
               "supporting eco-conscious brands, demonstrating that fashion and sustainability\n"
               "can go hand-in-hand without compromising style or creativity.\n\n" RESET);

    // Story 3
    printf(GRAY "╔════════════════════════════════════════════════╗\n" RESET);
    printf(GRAY "║" WHITE "  🌏 FILIPINO DESIGNERS IN GLOBAL RUNWAYS         " GRAY "║\n" RESET);
    printf(GRAY "╚════════════════════════════════════════════════╝\n" RESET);
    printf(GRAY "Filipino designers have gained international recognition by participating in\n"
               "fashion weeks in Paris, Tokyo, and New York. Their unique approach combines\n"
               "cultural heritage with modern trends, capturing global attention and elevating\n"
               "the Philippine fashion scene. Media and critics praise their ability to merge\n"
               "storytelling, craftsmanship, and social messaging in each collection.\n\n" RESET);

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
