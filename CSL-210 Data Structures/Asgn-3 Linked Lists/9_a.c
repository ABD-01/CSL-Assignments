// Assignment-3
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q)9 a
// L1 AND L2

#include <stdio.h>
#include <stdlib.h>

typedef int dtype;

typedef struct node
{
    dtype data;
    struct node *next;
} node;

void printLinkedList(node *head);
void freeLinkedList(node **head);
void insert(node **head, int n);
void moveNode(node **dest, node **src);
node *AND(node **head1, node **head2);
int main()
{
    node *head1 = NULL, *head2 = NULL, *and = NULL;
    
    insert(&head1, 10);insert(&head1, 7);insert(&head1, 5);insert(&head1, 3);insert(&head1, 1);
    insert(&head2,10);insert(&head2, 7);insert(&head2, 5);insert(&head2, 4);insert(&head2, 2);

    printf("%-20s: ", "The Linked List - 1 "); printLinkedList(head1);
    printf("%-20s: ", "The Linked List - 2 "); printLinkedList(head2);

    and = AND(&head1, &head2);

    printf("%-20s: ", "The AND List "); printLinkedList(and);

    freeLinkedList(&head1);
    freeLinkedList(&head2);
    freeLinkedList(&and);

    return 0;
}

void moveNode(node **dest, node **src)
{
    node *tmp;
    tmp = *src;
    *src = tmp->next; // *src = (*src)->next;
    tmp->next = *dest;
    *dest= tmp;
}

node *AND(node **head1, node **head2)
{
    node *result, *tmp = NULL;
    result = (node *)malloc(sizeof(node));
    result->next=NULL;
    node *cursor = result;

    while (*head1 != NULL && *head2 != NULL)
    {
        if ((*head1)->data == (*head2)->data)
        {
            moveNode(&(cursor->next), head1);
            cursor =cursor->next;
        }
        else if ((*head1)->data < (*head2)->data)
        {
            tmp = *head1;
            *head1 = (*head1)->next;
            free(tmp);
        }
        else
        {
            tmp = *head2;
            *head2 = (*head2)->next;
            free(tmp);
        }
    }

    tmp = result;
    result = result->next;
    free(tmp);
    return result;
}

void insert(node **head, int n)
{
    node *new = (node *)malloc(sizeof(node));
    if (new == NULL)
        return;
    new->data = n;
    new->next = *head;

    *head = new;
}
void printLinkedList(node *head)
{
    for (node *tmp = head; tmp != NULL; tmp = tmp->next)
        printf("%i ", tmp->data);
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