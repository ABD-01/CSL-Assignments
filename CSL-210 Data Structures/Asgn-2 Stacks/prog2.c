// Assignment-2
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q)2
// Implement Queue

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

#define SIZE 10

typedef float dtype;
typedef struct Queue
{
    dtype Array[SIZE];
    int front, rear, size;
} Queue;

Queue *initQueue(Queue *queue);
int isEmpty(Queue queue);
int isFull(Queue queue);
dtype deQueue(Queue *queue);
void enQueue(dtype entry, Queue *queue);
int sizeQueue(Queue queue);
void clearQueue(Queue *queue);

int main()
{
    Queue *pQueue = (Queue *)malloc(sizeof(Queue));
    dtype elem;
    int choice = -1;
    initQueue(pQueue);
    printf("Queue Initialized.\n");

    while (choice)
    {
        printf(
            "\nEnter the option"
            "\n1. Check Empty"
            "\n2. Check Full"
            "\n3. Dequeue Element"
            "\n4. Enqueue Element"
            "\n5. Queue Size"
            "\n6. Clear Queue"
            "\n7. Print Queue"
            "\n8. Queue Front"
            "\n9. Queue Rear"
            "\n0. Exit"
            "\nChoice : ");
        scanf(" %d", &choice);
        switch (choice)
        {
        case 1:
            if (isEmpty(*pQueue))
                printf("The Queue is Empty.\n");
            else
                printf("The Queue is NOT Empty.\n");
            break;

        case 2:
            if (isFull(*pQueue))
                printf("The Queue is Full.\n");
            else
                printf("The Queue is NOT Full.\n");
            break;

        case 3:
            elem = deQueue(pQueue);
            if (elem == -1024)
                printf("Cannot Dequeue. The Queue is Empty.\n");
            else
                printf("The Dequeued element is %f.\n", elem);
            break;

        case 4:
            if (isFull(*pQueue))
                printf("Cannot Enqueue. The Queue is Full.\n");
            else
            {
                printf("Enter the Element to be enqueued : ");
                fflush(stdin);
                scanf(" %f", &elem);
                enQueue(elem, pQueue);
            }
            break;

        case 5:
            printf("The size of Queue is %d.\n", sizeQueue(*pQueue));
            break;

        case 6:
            clearQueue(pQueue);
            break;

        case 7:
            for (int i = pQueue->front; i - pQueue->front < pQueue->size; i++)
                printf("%.3f ", pQueue->Array[i]);
            printf("\n");
            break;

        case 8:
            if (isEmpty(*pQueue))
                printf("The Queue is Empty.\n");
            else
                printf("The Front of Queue is %f.\n", pQueue->Array[pQueue->front]);
            break;

        case 9:
            if (isEmpty(*pQueue))
                printf("The Queue is Empty.\n");
            else
                printf("The Rear of Queue is %f.\n", pQueue->Array[pQueue->rear]);
            break;

        default:
            printf("Bye.\n");
        }
    }
    return 0;
}

Queue *initQueue(Queue *queue)
{
    queue->front = 0;
    queue->rear = -1;
    queue->size = 0;
    return queue;
}
int isEmpty(Queue queue)
{
    if (queue.size == 0)
        return true;
    return false;
}
int isFull(Queue queue)
{
    if (queue.size == SIZE)
        return true;
    return false;
}
dtype deQueue(Queue *queue)
{
    dtype e;
    if (!isEmpty(*queue))
    {
        e = queue->Array[queue->front];
        queue->front = (queue->front + 1) % SIZE;
        queue->size--;
    }
    else
        e = -1024;
    return e;
}
void enQueue(dtype entry, Queue *queue)
{
    if (!isFull(*queue))
    {
        queue->rear = (queue->rear + 1) % SIZE;
        queue->Array[queue->rear] = entry;
        queue->size++;
        printf("Element has been enqueued.\n");
        return;
    }
    printf("Unable to enqueue.\n");
    return;
}
int sizeQueue(Queue queue)
{
    return queue.size;
}
void clearQueue(Queue *queue)
{
    queue->size = 0;
    queue->front = queue->rear + 1;
    printf("The Queue is Cleared.\n");
}
