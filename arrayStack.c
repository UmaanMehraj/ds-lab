// Programme representing various array based stack operations!
#include <stdio.h>

// Function declarations

void push(int arr[], int *top, int data);
void isEmpty(int top);

int main()
{
    int top = -1;

    int stack[100];

    // push(stack, &top, 5);
    isEmpty(top);

    // printf("%d", stack[top]);
}

void push(int arr[], int *top, int data)
{
    (*top)++;
    arr[*top] = data;
}

void isEmpty(int top)
{
    if (top == -1)
    {
        printf("Stack is empty! \n");
    }
    else
    {
        printf("Stack is not empty \n");
    }
}