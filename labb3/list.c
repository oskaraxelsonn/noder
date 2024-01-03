#include "node.h"
#include "list.h"
#include <stdlib.h>

int sizeoflist(node *n)
{
    node *temp = n;
    int size = 0;
    while (temp->next != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}

int isempty(node *n)
{
    if (n == NULL)
    {
        return 1;
    }
    return 0;
}

node *returnat(node *n, int target, int a)
{
    node *temp = n;
    while (target > a && n->next != NULL)
    {
        temp = temp->next;
    }
    return temp;
}

int exists(node *n, int tal)
{
    if (n->el == tal)
    {
        return 1;
    }
    else if (n->next != NULL)
    {
        exists(n->next, tal);
        return 0;
    }
    else
    {
        return 0;
    }
}

int firstindex(node *n, int tal)
{
    int plats = 0;
    while (n->next != NULL)
    {
        n = n->next;
        plats++;
        if (n->el == tal)
        {
            return plats;
        }
    }
    return -1;
}

node *addat(node *n, int tal, int place, int a)
{
    node *temp = n;
    while (temp->next != NULL && place > a)
    {
        temp = temp->next;
        a++;
    }
    node *newNode = (node *)malloc(sizeof(node *));
    newNode->el = tal;
    newNode->next = temp->next;

    temp->next = newNode;
    return n;
}

int removeat(node *n, int place)
{
    node *temp = n->next;
    int a = 0;
    while (temp->next != NULL && place > a)
    {
        temp = temp->next;
        n = n->next;
        a++;
    }
    n->next = temp->next;
    free(temp);
    return 0;
}

void sortlist(node *n)
{
    node *current = n;
    int temp;
    int size = sizeoflist(n);
    for (int i = size; i >= 0; i--)
    {
        current = n;
        while (current->next != NULL)
        {
            if (current->el > current->next->el)
            {
                temp = current->el;
                current->el = current->next->el;
                current->next->el = temp;
            }
            current = current->next;
        }
    }
}