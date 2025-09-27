#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// Function declaration
void traversal(Node *node);
// void insertAtBeginning(Node **head, int data);

int main()
{
    // Header node
    Node *head;
    Node *temp;

    Node *one = (Node *)malloc(sizeof(Node));
    Node *two = (Node *)malloc(sizeof(Node));
    Node *three = (Node *)malloc(sizeof(Node));

    head = one;
    temp = head;

    one->data = 7;
    two->data = 9;
    three->data = 12;

    one->next = two;
    two->next = three;
    three->next = NULL;

    // insertAtBeginning(&head, 4);
    traversal(temp);

    return 0;
}

void traversal(Node *node)
{
    while (node)
    {
        printf("Data in Node is: %d \n", node->data);
        node = node->next;
    }
}

// void insertAtBeginning(Node **head, int data)
// {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->data = data;
//     newNode->next = *head;
//     *head = newNode;
// }