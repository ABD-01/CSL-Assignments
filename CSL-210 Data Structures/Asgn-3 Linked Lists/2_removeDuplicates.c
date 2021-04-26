// Assignment-3
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q)2
// Remove Duplicates from Linked Lists

#include <stdio.h>
#include <stdlib.h>

typedef float dtype;

typedef struct node
{
    dtype data;
    struct node *next;
} node;


void printLinkedList(node *head);
void freeList(node *head);
void removeDuplicates(node *head);
int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Usage : ./prog2 n1 n2 n3 n4 ...\n");
        return 1;
    }
    int n = argc - 1, i;
    node *head = NULL;

    for (i = 0; i < n; i++)
    {
        node *new = (node *)malloc(sizeof(node));
        if (new == NULL)
            return 1;
        new->data = atof(argv[i + 1]);
        new->next = head;

        head = new;
    }
    printf("%-25s: ", "The Linked List"); printLinkedList(head);

    removeDuplicates(head);

    printf("%-25s: ", "The Modified Linked List"); printLinkedList(head);

    freeList(head);
    return 0;
}
void removeDuplicates(node *head)
{
    if (head == NULL)
        return;
    node *cursor = head, *tmp = NULL;
    while (cursor->next != NULL)
    {
        if (cursor->data == cursor->next->data)
        {
            tmp = cursor->next;
            cursor->next = cursor->next->next;
            free(tmp);
        }
        else
            cursor = cursor->next;
    }
}
void printLinkedList(node *head)
{
    // Print list
    for (node *tmp = head; tmp != NULL; tmp = tmp->next)
        printf("%.3f ", tmp->data);
    printf("\n");
}
void freeList(node *head)
{
    node *tmp;
    // Free list
    while (head != NULL)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}