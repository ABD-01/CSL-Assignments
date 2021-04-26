// Assignment-3
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q)12
// Quick Sort Doubly LL

#include <stdio.h>
#include <stdlib.h>

typedef int dtype;

typedef struct node
{
    dtype data;
    struct node *next;
    struct node *prev;
} node;

void reverse(node **head);
void push(node **head, int new_data);
void quickSort(node *head);
void quickSortHelper(node *l, node *h);
node *partition(node *l, node *h);
node *lastNode(node *root);
void swap(int *a, int *b);
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

    quickSort(head);

    printf("%-25s: ", "The Sorted List");
    printLinkedList(head);

    freeLinkedList(&head);
    return 0;
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

node *lastNode(node *root)
{
    while (root && root->next)
        root = root->next;
    return root;
}

node *partition(node *l, node *h)
{
    int x = h->data;

    node *i = l->prev;

    for (node *j = l; j != h; j = j->next)
    {
        if (j->data <= x)
        {
            i = (i == NULL) ? l : i->next;

            swap(&(i->data), &(j->data));
        }
    }
    i = (i == NULL) ? l : i->next;
    swap(&(i->data), &(h->data));
    return i;
}

void quickSortHelper(node *l, node *h)
{
    if (h != NULL && l != h && l != h->next)
    {
        node *p = partition(l, h);
        quickSortHelper(l, p->prev);
        quickSortHelper(p->next, h);
    }
}

void quickSort(node *head)
{
    node *last = lastNode(head);

    quickSortHelper(head, last);
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