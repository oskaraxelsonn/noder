#include "node.h"

void writelist(node *n);     // går igenom hela listan och skriver ut varje tal, rekrursivt
void writesize(node *n);     // skriver ut hur många element som finns i listan
node *addint(node *n);       // lägger till element sist i listan
node *addintat(node *n);     // lägger till element på valfri plats
void removeint(node *n);     // tar bort givet element
void removeintat(node *n);   // tar bort ett element på en given plats
void emptylist(node *n);     // tar bort alla element
node *turnaround(node *n);   // vänder på listan
void shifttoleft(node *n);   // skiftar listan till vänster och lägger första elementet sist
void shifttoright(node *n);  // skiftar listan till höger och lägger sista elementet först
void sort(node *n);          // sorterar listan med hjälp av bubbelsort
void writestartadr(node *n); // skriver ut start addresen
void gen_list(node *n);      // genererar en lista med 10 noder