// Assignment-3
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q)6
// Merge LL taking nodes alternatively

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef float dtype;

typedef struct node
{
    dtype data;
    struct node *next;
} node;

void printLinkedList(node *head);
void freeLinkedList(node **head);
void initList(node **head, int n);
void shuffle_merge(node **head, node **head2);
int main(int argc, char **argv)
{
    srand(time(NULL));
    if (argc < 3)
    {
        printf("Usage : ./prog6 lenght1 lenght2 \n");
        return 1;
    }
    node *head = NULL, *head2 = NULL;
    initList(&head, atoi(argv[1]));
    initList(&head2, atoi(argv[2]));

    printf("%-20s: ", "The Linked List - 1 "); printLinkedList(head);
    printf("%-20s: ", "The Linked List - 2 "); printLinkedList(head2);

    shuffle_merge(&head, &head2);

    printf("%-20s: ", "The Merged List "); printLinkedList(head);

    freeLinkedList(&head);
    freeLinkedList(&head2);

    return 0;
}

void shuffle_merge(node **head, node **head2)
{
    node *cursor = *head, *tmp = NULL;
    while (cursor != NULL && *head2 != NULL)
    {
        tmp = *head2;
        *head2 = (*head2)->next;

        tmp->next = cursor->next;
        cursor->next = tmp;

        // printf("%-20s: ", "The Linked List - 1 "); printLinkedList(*head);
        // printf("%-20s: ", "The Linked List - 2 "); printLinkedList(*head2);

        if (cursor->next->next == NULL)
        {
            cursor->next->next = *head2;
            *head2 = NULL;
            break;
        }
        cursor = cursor->next->next;
    }   
}

void initList(node **head, int n)
{
    for (int i = 0; i < n; i++)
    {
        node *new = (node *)malloc(sizeof(node));
        if (new == NULL)
            return;
        new->data = rand() % 20;
        new->next = *head;

        *head = new;
    }
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