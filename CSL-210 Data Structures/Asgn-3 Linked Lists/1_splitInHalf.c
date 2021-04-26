// Assignment-3
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q)1
// Split a linked List into two parts

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
int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Usage : ./prog1 n1 n2 n3 n4 ...\n");
        return 1;
    }
    int n = argc - 1, m = n / 2, i;
    node *head = NULL, *back = NULL, *slow = NULL, *fast = NULL;

    for (i = 0; i < n; i++)
    {
        node *new = (node *)malloc(sizeof(node));
        if (new == NULL)
            return 1;
        new->data = atof(argv[i + 1]);
        new->next = head;

        head = new;
    }
    printf("%-22s: ", "The Linked List");
    printLinkedList(head);

    fast = head->next;
    slow = head;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast !=NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    back = slow->next;
    slow->next = NULL;


    printf("%-22s: ", "The First Half List");
    printLinkedList(head);
    printf("%-22s: ", "The Second Half List");
    printLinkedList(back);

    freeList(head);
    freeList(back);
    return 0;
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
    // Free list
    while (head != NULL)
    {
        node *tmp = head;
        head = head->next;
        free(tmp);
    }
}