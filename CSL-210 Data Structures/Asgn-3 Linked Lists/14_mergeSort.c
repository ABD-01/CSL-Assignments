// Assignment-3
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q) 14
// Merge Sort

#include <stdio.h>
#include <stdlib.h>

typedef int dtype;

typedef struct node
{
    dtype data;
    struct node *next;
} node;

void printLinkedList(node *head);
void freeList(node *head);
void splitInHalf(node **head1, node **head2);
void moveNode(node **dest, node **src);
node *mergeLists(node **head1, node **head2);
void mergeSort(node **head1);
int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Usage : ./prog14 n1 n2 n3 n4 ...\n");
        return 1;
    }

    int n = argc - 1, i, m;
    node *head = NULL;

    for (i = 0; i < n; i++)
    {
        node *new = (node *)malloc(sizeof(node));
        if (new == NULL)
            return 1;
        new->data = atoi(argv[i + 1]);
        new->next = head;

        head = new;
    }
    printf("%-25s: ", "The Linked List");
    printLinkedList(head);
    
    mergeSort(&head);

    printf("%-25s: ", "The Sorted Linked List");
    printLinkedList(head);

    freeList(head);
    return 0;
}

void splitInHalf(node **head1, node **head2)
{
    if (*head1 == NULL || (*head1)->next == NULL)
    {
        *head2 = NULL;
        return;
    }

    node *slow = NULL, *fast=NULL;
    fast = (*head1)->next;
    slow = *head1;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast !=NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    *head2 = slow->next;
    slow->next = NULL;

    return;
}

void moveNode(node **dest, node **src)
{
    node *tmp;
    tmp = *src;
    *src = tmp->next; // *src = (*src)->next;
    tmp->next = *dest;
    *dest= tmp;
}

node *mergeLists(node **head1, node **head2)
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

void mergeSort(node **head1)
{
    if (*head1 == NULL || (*head1)->next == NULL)
        return;

    node *head2 = NULL;
    splitInHalf(head1, &head2);

    mergeSort(head1);
    mergeSort(&head2);

    *head1 = mergeLists(head1, &head2);
}

void printLinkedList(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        printf("%i ", tmp->data);
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