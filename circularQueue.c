#include <stdio.h>
#define SIZE 5

int isFull(int *front, int *rear);
int isEmpty(int *front);
void enqueue(int arr[], int *front, int *rear, int ele);
void dequeue(int arr[], int *front, int *rear);
void display(int arr[], int *front, int *rear);

int main()
{
    int queue[SIZE];
    int front = -1, rear = -1;
    // if (isFull(&front, &rear))
    // {
    //     printf("Queue is full\n");
    // }
    // else
    // {
    //     printf("Queue is not full\n");
    // }
    // if (isEmpty(&front))
    // {
    //     printf("Queue is empty\n");
    // }
    enqueue(queue, &front, &rear, 10);
    enqueue(queue, &front, &rear, 20);
    enqueue(queue, &front, &rear, 30);
    dequeue(queue, &front, &rear);
    dequeue(queue, &front, &rear);
    display(queue, &front, &rear);
}

int isFull(int *front, int *rear)
{
    if (*front == ((*rear) + 1) % SIZE || *front == 0 && *rear == SIZE - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(int *front)
{
    if (*front == -1)
    {
        return 1;
    }
    return 0;
}

void enqueue(int arr[], int *front, int *rear, int ele)
{
    if (isFull(front, rear))
    {
        printf("Queue is full\n");
    }
    else if (*front == -1)
    {
        *front = 0;
    }
    *rear = (*rear + 1) % SIZE;
    arr[*rear] = ele;

    printf("\nInserted -> %d", ele);
}

void dequeue(int arr[], int *front, int *rear)
{
    int ele;
    if (isEmpty(front))
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        ele = arr[*front];
        if (*front == *rear)
        {
            *front = -1;
            *rear = -1;
        }
        else
        {
            *front = (*front + 1) % SIZE;
        }
    }

    printf("\nElement deleted -> %d", ele);
}

void display(int arr[], int *front, int *rear)
{
    int i;
    if (isEmpty(arr))
        printf(" \n Empty Queue\n");
    else
    {
        printf("\n Front -> %d ", *front);
        printf("\n Items -> ");
        for (i = *front; i != *rear; i = (i + 1) % SIZE)
        {
            printf("%d ", arr[i]);
        }
        printf("%d ", arr[i]);
        printf("\n Rear -> %d \n", *rear);
    }
}