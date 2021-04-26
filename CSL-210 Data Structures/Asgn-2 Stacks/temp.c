// Assignment-2
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q)1
// Implement Stack

#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

#define SIZE 10

typedef float dtype;
typedef struct Stack
{
    dtype Array[SIZE];
    int top;
}Stack;

void initStack(Stack *stack);
int isEmpty(Stack stack);
int isFull(Stack stack);
dtype pop(Stack *stack);
void push(dtype entry, Stack *stack);

int main()
{
    Stack *pStack;
    float elem;
    int choice = -1;
    initStack(pStack);
    while (choice)
    {
        printf("\nEnter the option \n1. Check Empty  \n2. Check Full  \n3. Pop Element  \n4. Push Element \n5. Print Stack \n0. Exit\nChoice : ");
        scanf(" %d", &choice);
        switch (choice)
        {
        case 1:
            if (isEmpty(*pStack))
                printf("The Stack is Empty.\n");
            else
                printf("The Stack is NOT Empty.\n");
            break;

        case 2:
            if (isFull(*pStack))
                printf("The Stack is Full.\n");
            else
                printf("The Stack is NOT Full.\n");
            break;

        case 3:
            elem = pop(pStack);
            if (elem == -1024)
                printf("Cannot Pop. The Stack is Empty.\n");
            else
                printf("The poped element is %f.\n", elem);
            break;
        
        case 4:
            if (isFull(*pStack))
                printf("Cannot Push. The Stack is Full\n");
            else
            {
                printf("Enter the Element to be pushed : ");
                fflush(stdin);
                scanf("%f", &elem);
                push(elem, pStack);
            }
            break;
            
        case 5:
            for (int i = 0; i <= pStack->top; i++)
                printf("%f ", pStack->Array[i]);
            printf("\n");
            break;

        default:
            printf("Bye.\n");
        }
    }
    
}
void initStack(Stack *stack)
{
    // (*stack).top = -1;
    stack = (Stack*)malloc(sizeof(Stack));
    stack->top = -1;
    return;
}
int isEmpty(Stack stack)
{
    if (stack.top == -1)
        return true;
    return false;
}
int isFull(Stack stack)
{
    if (stack.top == SIZE - 1)
        return true;
    return false;
}
dtype pop(Stack *stack)
{
    dtype e;
    if (!isEmpty(*stack))
        e = stack->Array[stack->top --];
        // e = stack->Array[stack->top];
        // stack->top = stack->top - 1;
    else
        e = -1024;
    return e;
}
void push(dtype entry, Stack *stack)
{
    if (!isFull(*stack))
    {
        stack->Array[++(stack->top)] = entry;
        // stack->Array[stack->top + 1] = entry;
        // stack->top = stack->top + 1;
        printf("Element has been pushed!\n");
        return;
    }
    printf("Unable to Push.\n");
    return;
}