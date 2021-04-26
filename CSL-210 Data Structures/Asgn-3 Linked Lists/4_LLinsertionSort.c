// Assignment-3
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q)4
// Insertion Sort on linked list

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
void sortList(node **head);
void sortedInsert(node **, node *);
int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Usage : ./prog4 n1 n2 n3 n4 ...\n");
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

    sortList(&head);

    printf("%-25s: ", "The Sorted List");
    printLinkedList(head);

    freeList(head);
    return 0;
}

void sortedInsert(node **head, node *new_node)
{
    node *current;
    if (*head == NULL || (*head)->data >= new_node->data)
    {
        new_node->next = *head;
        *head = new_node;
    }
    else
    {
        current = *head;
        while (current->next != NULL &&
               current->next->data < new_node->data)
        {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

void sortList(node **head)
{
    node *sorted = NULL;

    node *current = *head;
    while (current != NULL)
    {
        node *next = current->next;

        sortedInsert(&sorted, current);

        current = next;
    }

    *head = sorted;
}
void printLinkedList(node *head)
{
    // print list
    for (node *tmp = head; tmp != NULL; tmp = tmp->next)
        printf("%.3f ", tmp->data);
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