#include <stdio.h>
#include <string.h>

void traversal();
int strLength();
int isPalindrome();

int main()
{
    // traversal();
    // printf("The length of the string is %d", strLength());
    if (isPalindrome())
    {
        printf("The string is Palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
}

void traversal()
{
    char str[100];
    char *p;

    printf("Enter string:  ");
    scanf("%s", str);

    p = &str[0];
    while (*p != '\0')
    {
        printf("%c", *p);
        p++;
    }
    printf("\n");
}

int strLength()
{
    char str[100];
    char *p;

    printf("Enter string: ");
    scanf("%s", str);

    p = &str[0];

    int length = 0;
    while (*p != '\0')
    {
        length++;
        p++;
    }

    return length;
}

int isPalindrome()
{
    char str[100];
    char *p, *q;

    printf("Enter string: ");
    scanf("%s", str);

    int length = strlen(str) - 1;

    p = &str[0];
    q = &str[0];

    while (*q != '\0')
    {
        q++;
    }
    q--;

    while (p <= q)
    {
        if (*p == *q)
            return 1;
        else
            return 0;

        p++;
        q--;
    }
}