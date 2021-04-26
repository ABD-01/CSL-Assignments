// Assignment-3
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q) 11
// Recursively reverse LL

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
void reverse(node **head);
node *recurReverse(node **head);
int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Usage : ./prog3 n1 n2 n3 n4 ...\n");
        return 1;
    }

    int n = argc - 1, i, m;
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
    printf("%-25s: ", "The Linked List");
    printLinkedList(head);

    // reverse(&head);
    head = recurReverse(&head);

    printf("%-25s: ", "The Reversed Linked List");
    printLinkedList(head);

    freeList(head);
    return 0;
}

node *recurReverse(node **head)
{
    if (*head == NULL || (*head)->next == NULL)
            return *head;
 
        /* reverse the rest list and put 
          the first element at the end */
        node* rest = recurReverse(&((*head)->next));
        (*head)->next->next = *head;
 
        /* tricky step -- see the diagram */
        (*head)->next = NULL;
 
        /* fix the head pointer */
        return rest;
}
void reverse(node **head)
{
    node *rev = NULL, *cursor = NULL;

    while (*head != NULL)
    {
        cursor = *head;
        *head = (*head)->next;

        cursor->next = rev;
        rev = cursor;
    }
    *head = rev;
    return;
}
void printLinkedList(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        printf("%.3f ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}
void freeList(node *head)
{
    node *tmp;
    // Free List
    while (head != NULL)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}