#include "node.h"
#include "driv.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val = -1;

    node *handtag = (node *)malloc(sizeof(node *));
    system("clear");

    while (val != 0)
    {

        printf("\n0: Avsluta\n1: Skriv ut listan\n2: Skriv ut listans storlek\n3: Lägg till ett heltal sist i listan\n");
        printf("4: Lägg till ett heltal (valfri plats)\n5: Ta bort ett givet heltal\n6: Ta bort ett heltal (valfri plats)\n");
        printf("7: Töm listan\n8: Vänd på listan\n9: Skifta listan ett steg åt vänster (och lägg första heltalet sist)\n");
        printf("10: Skifta listan ett steg åt höger (och lägg sista heltalet först)\n11: Sortera listan (lägsta heltalet först)\n");
        printf("12: Skriv ut startaddressen för listan\n13: Generera 10 noder\n\nGör ditt val:");
        scanf("%d", &val);

        system("clear");

        switch (val)
        {
        case 0:
            break;
        case 1:
            writelist(handtag->next);
            break;
        case 2:
            writesize(handtag);
            break;
        case 3:
            addint(handtag);
            break;
        case 4:
            addintat(handtag);
            break;
        case 5:
            removeint(handtag);
            break;
        case 6:
            removeintat(handtag);
            break;
        case 7:
            emptylist(handtag);
            break;
        case 8:
            handtag->next = turnaround(handtag);
            break;
        case 9:
            shifttoleft(handtag);
            break;
        case 10:
            shifttoright(handtag);
            break;
        case 11:
            sort(handtag);
            break;
        case 12:
            writestartadr(handtag);
            break;
        case 13:
            gen_list(handtag);
            break;
        default:
            printf("Ogiltigt val!\n");
            break;
        }
    }
    return 0;
}