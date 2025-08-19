#include <stdio.h>

int main() 
{
    int a, b, c;

    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    
    printf("\nBefore swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    c = a;
    a = b;
    b = c;
    
    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
