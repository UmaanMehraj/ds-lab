// Program representing different Array Operations
#include <stdio.h>

// Function declarations
void arrayTraversal();

int main()
{
    arrayTraversal();
}

// Array Traversal!
void arrayTraversal()
{
    int arr[10];
    int length = sizeof(arr) / sizeof(int);
    printf("Enter array entries (10): ");

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Members of array are: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
