// Assignment-3
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q)13
// Check if Linked List is Palindrom Recursively

// Recursive program to check if a given linked list is palindrome 
#include <stdio.h> 
#include <stdlib.h> 

#define true 1
#define false 0

typedef int dtype;

typedef struct node
{
    dtype data;
    struct node *next;
} node;

int palindromeHelper(struct node** left, struct node* right);
int isPalindrome(struct node* head);
void printLinkedList(node *head);
void freeLinkedList(node **head);

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Usage : ./prog13 n1 n2 n3 n4 ...\n");
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

    printf("%-25s: ", "The Linked List");
    printLinkedList(head);

    isPalindrome(head) ? printf("The List is a Palindrome\n") : printf("The List is NOT a Palindrome\n"); 

    freeLinkedList(&head);
    return 0;
} 

int palindromeHelper(struct node** left, struct node* right) 
{ 
	if (right == NULL) 
		return true; 

	int isp = palindromeHelper(left, right->next); 
	if (isp == false) 
		return false; 

	int isp1 = (right->data == (*left)->data); 

	*left = (*left)->next; 

	return isp1; 
} 

int isPalindrome(struct node* head) 
{ 
	return palindromeHelper(&head, head); 
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