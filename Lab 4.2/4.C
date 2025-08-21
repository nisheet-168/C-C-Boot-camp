#include <stdio.h>

int main() 
{
    int N, a = 0, b = 1, next;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Fibonacci series up to %d:\n", N);

    for (int i = 1; a <= N; i++) 
    {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
