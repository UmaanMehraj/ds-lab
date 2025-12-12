#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int main()
{
    return 0;
}

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));

    if (newNode == NULL)
    {
        printf("Memory Allocation Failed \n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}