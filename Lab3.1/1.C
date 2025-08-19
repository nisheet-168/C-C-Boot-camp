#include <stdio.h>

int main()
{    
    int a, b;
    printf("Enter two numbers separated by space: ");
    if (scanf("%d %d", &a, &b) != 2) 
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (a < b) 
    {
        printf("Minimum is: %d\n", a);
    } 
    else if (b < a) 
    {
        printf("Minimum is: %d\n", b);
    } 
    else 
    {
        printf("Both numbers are equal: %d\n", a);
    }

    return 0;
}
