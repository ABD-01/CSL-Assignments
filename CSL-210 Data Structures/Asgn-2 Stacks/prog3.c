// Assignment-2
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q)3
// Implement Queue using Stacks

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

#define SIZE 10

typedef float dtype;

typedef struct STACK
{
    dtype Array[SIZE];
    int top;
} stack;

typedef struct QUEUE
{
    stack stack1, stack2;
} queue;

void initialize_queue(queue *q);
int check_queue_empty(queue *q);
int check_queue_full(queue *q);
void queue_size_check(queue *q);
void clear_queue(queue *q);
void add_element(dtype e, queue *q);
void del_element(queue *q);
void traverse_queue(queue *q);
void front_element_check(queue *q);

int main()
{
    queue q, *ptr_q;
    ptr_q = &q;
    int option = 99;
    dtype e;
    initialize_queue(ptr_q);
    while (option)
    {
        printf("\nSelect option from below menu\n1 : Empty queue check\n2 : Full queue check\n3 : Size check\n4 : Add element to queue\n5 : Delete element from queue\n6 : Check front element\n7 : Traverse entire queue\n8 : Clear queue\n0 : Exit\n\nSelected option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            if (!check_queue_empty(ptr_q))
                printf("The queue is not empty\n");
            else
                printf("The queue is empty");
            break;
        case 2:
            if (!check_queue_full(ptr_q))
                printf("The queue is not full\n");
            else
                printf("The queue is full\n");
            break;
        case 3:
            queue_size_check(ptr_q);
            break;
        case 4:
            printf("Enter the element to be added : ");
            scanf("%f", &e);
            add_element(e, ptr_q);
            break;
        case 5:
            del_element(ptr_q);
            break;
        case 6:
            front_element_check(ptr_q);
            break;
        case 7:
            traverse_queue(ptr_q);
            break;
        case 8:
            clear_queue(ptr_q);
            break;
        default:
            printf("Bye.\n");
        }
    }
    return 0;
}

void initialize_queue(queue *q)
{
    q->stack1.top = -1;
    q->stack2.top = -1;
}
int check_queue_empty(queue *q)
{
    if (q->stack1.top == -1)
        return true;
    else
        return false;
}
int check_queue_full(queue *q)
{
    if (q->stack1.top == SIZE - 1)
        return true;
    else
        return false;
}
void queue_size_check(queue *q)
{
    printf("Size of the queue is %d\n", q->stack1.top + 1);
}
void clear_queue(queue *q)
{
    q->stack1.top = -1;
    printf("The queue has been cleared successfully\n");
}
void add_element(dtype e, queue *q)
{
    if (!check_queue_full(q))
    {
        q->stack1.top += 1;
        q->stack1.Array[q->stack1.top] = e;
        printf("%f has been added to queue successfully\n", e);
    }
    else
        printf("%f can't be added as the queue is full\n", e);
}
void del_element(queue *q)
{
    if (!check_queue_empty(q))
    {
        for (int i = q->stack1.top; i >= 0; i--)
        {
            q->stack2.top = q->stack2.top + 1;
            q->stack2.Array[q->stack2.top] = q->stack1.Array[i];
        }
        printf("%f has been deleted successfully from the queue\n", q->stack2.Array[q->stack2.top]);
        q->stack2.top = q->stack2.top - 1;
        q->stack1.top = -1;
        for (int i = q->stack2.top; i >= 0; i--)
        {
            q->stack1.top = q->stack1.top + 1;
            q->stack1.Array[q->stack1.top] = q->stack2.Array[i];
        }
        q->stack2.top = -1;
    }
    else
        printf("The queue is empty hence no element deleted\n");
}
void traverse_queue(queue *q)
{
    if (!check_queue_empty(q))
    {
        for (int i = q->stack1.top; i >= 0; i--)
        {
            q->stack2.top = q->stack2.top + 1;
            q->stack2.Array[q->stack2.top] = q->stack1.Array[i];
        }
        q->stack1.top = -1;
        printf("Elements in the queue are :  ");
        for (int i = q->stack2.top; i >= 0; i--)
        {
            printf("  %f", q->stack2.Array[i]);
        }
        printf("\n");
        for (int i = q->stack2.top; i >= 0; i--)
        {
            q->stack1.top += 1;
            q->stack1.Array[q->stack1.top] = q->stack2.Array[i];
        }
        q->stack2.top = -1;
    }
    else
        printf("The queue is empty\n");
}
void front_element_check(queue *q)
{
    if (!check_queue_empty(q))
    {
        for (int i = q->stack1.top; i >= 0; i--)
        {
            q->stack2.top += 1;
            q->stack2.Array[q->stack2.top] = q->stack1.Array[i];
        }
        q->stack1.top = -1;
        printf("The element at the forefront of queue is : %f \n", q->stack2.Array[q->stack2.top]);
        for (int i = q->stack2.top; i >= 0; i--)
        {
            q->stack1.top += 1;
            q->stack1.Array[q->stack1.top] = q->stack2.Array[i];
        }
        q->stack2.top = -1;
    }
    else
        printf("The queue is empty\n");
}