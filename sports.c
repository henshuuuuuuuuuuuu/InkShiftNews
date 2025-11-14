#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "header.h"

int main() {
    int choice;
    loadingScreen();
    system("cls");
    header("SPORTS");
    navBar();

    // Story 1
    printf(GRAY "╔════════════════════════════════════════════════╗\n" RESET);
    printf(GRAY "║" WHITE "  🏀 UE RED WARRIORS DOMINATE THE COURT           " GRAY "║\n" RESET);
    printf(GRAY "╚════════════════════════════════════════════════╝\n" RESET);
    printf(GRAY "The University of the East Red Warriors continue their impressive winning streak\n"
               "in the college basketball league. Stellar performances by the team's star\n"
               "players have captivated fans, while coaches emphasize discipline, strategy,\n"
               "and teamwork. Spectators fill arenas every game, creating a vibrant, electric\n"
               "atmosphere. Analysts note that the Red Warriors' combination of skill, speed,\n"
               "and teamwork sets them apart as a dominant force in collegiate basketball.\n\n" RESET);

    // Story 2
    printf(GRAY "╔════════════════════════════════════════════════╗\n" RESET);
    printf(GRAY "║" WHITE "  ⚓ PH MARINES UNVEIL BRAHMOS MISSILE UNIT       " GRAY "║\n" RESET);
    printf(GRAY "╚════════════════════════════════════════════════╝\n" RESET);
    printf(GRAY "The Philippine Marine Corps recently unveiled its newly established BrahMos missile\n"
               "unit. This milestone highlights the country's commitment to strengthening\n"
               "coastal defense and modernizing military capabilities. Defense experts view this\n"
               "development as a strategic deterrent, signaling the nation's readiness to\n"
               "protect its territorial waters. The unit conducted demonstrations showcasing\n"
               "precision targeting, advanced missile systems, and coordination between\n"
               "naval and land forces.\n\n" RESET);

    // Story 3
    printf(GRAY "╔════════════════════════════════════════════════╗\n" RESET);
    printf(GRAY "║" WHITE "  🏅 SEA GAMES: FILIPINO ATHLETES SHINE           " GRAY "║\n" RESET);
    printf(GRAY "╚════════════════════════════════════════════════╝\n" RESET);
    printf(GRAY "Filipino athletes brought home multiple medals in swimming, track, and team events\n"
               "at the recent SEA Games. The country's rising sports talent received praise\n"
               "from fans and officials alike, with young athletes demonstrating perseverance,\n"
               "dedication, and skill. Their victories have inspired pride nationwide and\n"
               "highlighted the importance of investing in grassroots sports programs and\n"
               "training facilities to nurture future champions.\n\n" RESET);

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
