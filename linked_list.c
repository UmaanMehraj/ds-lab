#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *createNode(int data);
void printList(Node *node);

int main()
{
    Node *node1 = createNode(3);
    Node *node2 = createNode(5);
    Node *node3 = createNode(13);

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    printList(node1);

    free(node1);
    free(node2);
    free(node3);
}

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (!newNode)
    {
        printf("Memory Allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

void printList(Node *node)
{
    while (node)
    {
        printf("%d - >", node->data);
        node = node->next;
    }
    printf("null \n");
}