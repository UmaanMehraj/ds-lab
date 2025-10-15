#include <stdio.h>

long int factorial(int n);

int fibonacci(int n);

int main()
{
    int num = 5;
    for (int i = 0; i <= num; i++)
        printf("%d", fibonacci(i));
}

long int factorial(int n)
{
    if (n < 0)
    {
        printf("Factorial is not defined");
        return 0;
    }
    else if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}