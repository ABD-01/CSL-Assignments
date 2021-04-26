// Assignment-3
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q)10
// Reverse a Doubly Linked List

#include <stdio.h>
#include <stdlib.h>

typedef float dtype;

typedef struct node
{
    dtype data;
    struct node *next;
    struct node *prev;
} node;

void reverse(node **head);
void push(node **head, int new_data);
void printLinkedList(node *head);
void freeLinkedList(node **head);

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Usage : ./prog10 n1 n2 n3 n4 ...\n");
        return 1;
    }

    int n = argc - 1, i;
    node *head = NULL;

    for (i = 0; i < n; i++)
    {
        node *new = (node *)malloc(sizeof(node));
        if (new == NULL)
            return 1;
        push(&head, atof(argv[i + 1]));
    }
    printf("%-25s: ", "The Linked List");
    printLinkedList(head);

    reverse(&head);

    printf("%-25s: ", "The Reversed Linked List");
    printLinkedList(head);

    freeLinkedList(&head);
    return 0;
}

void reverse(node **head)
{
    node *tmp = NULL;
    node *cursor = *head;

    while (cursor != NULL)
    {
        tmp = cursor->prev;
        cursor->prev = cursor->next;
        cursor->next = tmp;
        cursor = cursor->prev;
    }

    if (tmp != NULL)
        *head = tmp->prev;
}

void push(node **head, int new_data)
{
    node *tmp = (node *)malloc(sizeof(node));

    tmp->data = new_data;

    tmp->prev = NULL;

    tmp->next = (*head);

    if ((*head) != NULL)
        (*head)->prev = tmp;

    (*head) = tmp;
}

void printLinkedList(node *head)
{
    for (node *tmp = head; tmp != NULL; tmp = tmp->next)
        printf("%.3f ", tmp->data);
    printf("\n");
}
void freeLinkedList(node **head)
{
    node *tmp;
    while (*head != NULL)
    {
        tmp = *head;
        *head = (*head)->next;
        free(tmp);
    }
}