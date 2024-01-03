#include "node.h"
#include "driv.h"
#include "list.h"
#include <stdio.h>

void writelist(node *n)
{ // 1
    if (isempty(n) == 1)
    {
        printf("Listan är tom\n");
    }
    else
    {
        if (n->next != NULL)
        {
            printf("%d  ", n->el);
            writelist(n->next);
        }
        if (n->next == NULL)
        {
            printf("%d\n", n->el);
        }
    }
}

void writesize(node *n)
{ // 2
    int a = sizeoflist(n);
    printf("%d\n", a);
}

node *addint(node *n)
{ // 3
    int temp;
    printf("Vilket tal vill du lägga till? ");
    scanf("%d", &temp);
    addat(n, temp, sizeoflist(n), 0);
    return n;
}

node *addintat(node *n)
{ // 4
    int tal, plats;
    printf("Vilket tal vill du lägga till? ");
    scanf("%d", &tal);
    printf("På vilken plats vill du lägg in talet? ");
    scanf("%d", &plats);
    addat(n, tal, plats - 1, 0);
    return n;
}

void removeint(node *n)
{ // 5
    int tal, plats;
    printf("Vilket tal vill du ta bort? ");
    scanf("%d", &tal);
    plats = firstindex(n, tal);
    if (plats != -1)
    {
        removeat(n, plats - 1);
    }
    else
    {
        printf("Talet finns inte\n");
    }
}

void removeintat(node *n)
{ // 6
    int place;
    printf("På vilken plats vill du ta bort ett tal? ");
    scanf("%d", &place);
    if (place > 0 && (place - 1) < sizeoflist(n))
    {
        removeat(n, place - 1);
    }
    else
    {
        printf("Platsen finns inte\n");
    }
}

void emptylist(node *n)
{ // 7
    int size = sizeoflist(n);
    for (int i = 0; i < size; i++)
    {
        removeat(n, i);
    }
}

node *turnaround(node *n)
{ // 8
    node *current = n->next;
    node *temp = NULL;
    node *next;

    while (current != NULL)
    {
        next = current->next;
        current->next = temp;
        temp = current;
        current = next;
    }

    n = temp;
    return n;
}

void shifttoleft(node *n)
{ // 9
    node *current = n;
    node *temp = n->next;
    n->next = temp->next;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = temp;
    temp->next = NULL;
}

void shifttoright(node *n)
{ // 10
    node *current = n;
    node *temp = n->next;
    while (temp->next != NULL)
    {
        current = current->next;
        temp = temp->next;
    }
    current->next = NULL;
    temp->next = n->next;
    n->next = temp;
}

void sort(node *n)
{ // 11
    n = n->next;
    if (isempty(n) != 1)
    {
        sortlist(n);
    }
    else
    {
        printf("Listan är tom\n");
    }
}

void gen_list(node *n)
{
    for (int i = 1; i <= 10; i++)
    {
        addat(n, i, sizeoflist(n), 0);
    }
}

void writestartadr(node *n)
{ // 12
    printf("%p\n", n);
}