// Assignment-3
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q) 15
// Check is Linked List is Cyclic

#include <stdio.h>
#include <stdlib.h>

#define True 1
#define False 0

typedef int dtype;

typedef struct node
{
    dtype data;
    struct node *next;
} node;

int isCyclic(node *head);
void freeList(node *head);
void moveNode(node **dest, node **src);
int main(int argc, char **argv)
{
    node *head = NULL, *p;

    node n1 = {1, NULL}; p = &n1; 
    moveNode(&head, &p);
    node n2 = {2, NULL}; p = &n2; 
    moveNode(&head, &p);
    node n3 = {3, NULL}; p = &n3; 
    moveNode(&head, &p);
    node n4 = {4, NULL}; p = &n4; 
    moveNode(&head, &p);
    node n5 = {5, NULL}; p = &n5; 
    moveNode(&head, &p);
    node n6 = {6, NULL}; p = &n6; 
    moveNode(&head, &p);

    printf("%-17s: ", "The Linked List");
    isCyclic(head) ? printf("The Linked List is Cyclic.\n") : printf("The Linked List is NOT Cyclic.\n");

    // Making it circular
    p = &n1;
    moveNode(&head, &p);

    printf("%-17s: ", "The Linked List");
    isCyclic(head) ? printf("The Linked List is Cyclic.\n") : printf("The Linked List is NOT Cyclic.\n");

    return 0;
}

int isCyclic(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {   
        printf("%i -> ", tmp->data);
        tmp = tmp->next;
        if (tmp == head)
        {
            printf("head(%i)\n", tmp->data);
            return True;
        }
    }
    printf("NULL\n");
    return False;
}

void moveNode(node **dest, node **src)
{
    node *tmp;
    tmp = *src;
    *src = tmp->next; // *src = (*src)->next;
    tmp->next = *dest;
    *dest= tmp;
}

