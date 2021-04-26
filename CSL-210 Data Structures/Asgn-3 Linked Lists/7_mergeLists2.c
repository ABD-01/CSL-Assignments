// Assignment-3
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q)7
// Merge sorted LLs in sorted manner (Method - 2)

#include <stdio.h>
#include <stdlib.h>

typedef float dtype;

typedef struct node
{
    dtype data;
    struct node *next;
} node;

void printLinkedList(node *head);
void freeLinkedList(node **head);
void insert(node **head, int n);
void moveNode(node **dest, node **src);
node *merge(node **head1, node **head2);
int main()
{
    node *head1 = NULL, *head2 = NULL, *res = NULL;

    insert(&head1, 9);insert(&head1, 7);insert(&head1, 5);insert(&head1, 3);insert(&head1, 1);
    insert(&head2,10);insert(&head2, 8);insert(&head2, 6);insert(&head2, 4);insert(&head2, 2);

    printf("%-20s: ", "The Linked List - 1 "); printLinkedList(head1);
    printf("%-20s: ", "The Linked List - 2 "); printLinkedList(head2);

    res = merge(&head1, &head2);

    printf("%-20s: ", "The Merged List "); printLinkedList(res);

    freeLinkedList(&res);

    return 0;
}

void moveNode(node **dest, node **src)
{
    
    node *tmp;
    tmp = *src;
    *src = tmp->next; // *src = (*src)->next;
    tmp->next = *dest;
    *dest= tmp;
    /*
    node *tmp;
    tmp = *dest;
    if (tmp == NULL)
    {
        *dest = *src;
        *src = (*src)->next;
        (*dest)->next = NULL;
    }
    else
    {
        while (tmp->next!=NULL)
            tmp=tmp->next;
        tmp->next = *src;
        *src = (*src)->next;
        tmp->next->next = NULL;
    }
    */
}

node *merge(node **head1, node **head2)
{
    node *result, *tmp = NULL;
    result = (node *)malloc(sizeof(node));
    result->next=NULL;
    node *cursor = result;

    while (1)
    {
        if (*head1 == NULL)
        {
            cursor->next = *head2;
            *head2 =NULL;
            break;
        }
        if (*head2 == NULL)
        {
            cursor->next = *head1;
            *head1=NULL;
            break;
        }
        if ((*head1)->data < (*head2)->data)
        {
            moveNode(&(cursor->next), head1);
            // tmp = *head1;
            // *head1 = tmp->next; // *head1 = (*head1)->next;
            // tmp->next = cursor->next;
            // cursor->next = tmp;
        }
        else
        {
            moveNode(&(cursor->next), head2);
        }
        cursor =cursor->next;
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