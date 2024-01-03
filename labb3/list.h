#include "node.h"

// pre: inget
int sizeoflist(node *n);
// går igenom hela listan och räknar upp, när sista elementen nås så retuneras storleken
// post: retunerar storleken på listan

// pre: inget
int isempty(node *n);
// kollar ifall listan är tom
// post: retunear 1 ifall listan är tom, noll ifall det finns minst ett element i listan

// pre:  se till att platsen finns
node *returnat(node *n, int target, int a);
// retunerar ett element på en viss plats, denna funktion används inte
// post: retunear ett element på en viss plats.

// pre: inget
int exists(node *n, int tal);
// kollar om ett visst tal finns i listan, detta görs rekursivt
// post: retunerar 1 ifall talet finns, 0 om det inte finns.

// pre: inget
int firstindex(node *n, int tal);
// retunerar platsen där första talet i listan finns, gör iterativt
// post: retunerar -1 ifall talet inte finns, annars retunerar talets plats

// pre: inget
node *addat(node *n, int tal, int place, int a);
// lägger till en nod på en viss plats, görs iterativt
// post: lägger till en nod på en viss plats

// pre: kolla ifall platsen finns.
int removeat(node *n, int place);
// tar bort en nod på en viss plats, görs iterativt
// post: tar bort ett element

// pre: kolla så att det finns en lista
void sortlist(node *n);
// sorterar listan med bubblesort
// post: retunerar ingen, men listan sorteras