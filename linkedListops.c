#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// Function declaration
void traversal(Node *node);
void *createNode(int data);
void *insertAtBeginning(Node *head, int data);
int counNodes(Node *head);

int main()
{
    // Header node
    Node *head;

    // some nodes
    Node *nodeOne = createNode(1);
    head = nodeOne;

    Node *nodeTwo = createNode(2);
    Node *nodeThree = createNode(3);

    nodeOne->next = nodeTwo;
    nodeTwo->next = nodeThree;

    traversal(head);
    // insertAtBeginning(head, 5);
    printf("Number of nodes are %d \n", counNodes(head));

    return 0;
}

void *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (!newNode)
    {
        printf("Memory allocation failed!");
    }
    else
    {
        newNode->data = data;
        newNode->next = NULL;
    }

    return newNode;
}

void traversal(Node *node)
{
    while (node)
    {
        printf("Data in Node is: %d \n", node->data);
        node = node->next;
    }
}

void *insertAtBeginning(Node *head, int data)
{
    Node *newNode = createNode(data);

    newNode->next = head;
    head = newNode;

    printf("Insertion of a new node with data %d succesful! \n", data);
}

int counNodes(Node *head)
{
    int count = 0;
    while (head)
    {
        count++;
        head = head->next;
    }
    return count;
}