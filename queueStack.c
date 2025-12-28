#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *createNode(int data);
void traversal(Node *front);
void enqueue(int data, Node *rear);
void dequeue(Node *front);

int main()
{
    Node *front, *rear;
    Node *nodeOne = createNode(1);
    Node *nodeTwo = createNode(2);

    nodeOne->next = nodeTwo;

    front = nodeOne;
    rear = nodeTwo;

    // traversal(front);
    // enqueue(5, rear);
    dequeue(front);
    return 0;
}

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));

    newNode->data = data;
    newNode->next = NULL;
}

void traversal(Node *front)
{
    printf("Queue: ");

    while (front)
    {
        printf("%d ", front->data);
        front = front->next;
    }
    printf("\n");
}

void enqueue(int data, Node *rear)
{
    Node *newNode = createNode(data);
    rear->next = newNode;

    printf("New member with data %d added to the queue\n", data);
}

void dequeue(Node *front)
{
    front = front->next;

    printf("Dequeued succesfully \n");
}