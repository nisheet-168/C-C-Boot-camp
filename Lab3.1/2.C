#include <stdio.h>

int main() 
{
    double num;

    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num < 0.0) 
    {
        printf("Number is Negative.\n");
    } 
    else if (num > 0.0) 
    {
        printf("Number is Positive.\n");
    } 
    else 
    {
        printf("Number is Neutral.\n");
    }

    return 0;
}

