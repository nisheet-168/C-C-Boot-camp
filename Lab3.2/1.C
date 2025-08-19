#include <stdio.h>

int main()
{    
    int a, b,c;
    printf("Enter first value =");
    scanf("%d",&a);
    printf("Enter second value =");
    scanf("%d",&b);
    printf("Enter third value =");
    scanf("%d",&c);

    if (a < b) 
    {
        printf("Minimum is: %d\n", a);
    } 
    else if (b < a) 
    {
        printf("Minimum is: %d\n", b);
    } 
    else if (c < b) 
    {
        printf("Minimum is: %d\n", c);
    } 
    else 
    {
        printf("Both numbers are equal: %d\n", a);
    }

    return 0;
}
