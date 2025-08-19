#include <stdio.h>

int main() 
{
    double x, y, result;
    printf("Enter value for x: ");
    scanf("%lf", &x);
    printf("Enter value for y: ");
    scanf("%lf", &y);

    result = (x - y) * (x - y);

    printf("(%.2f - %.2f)^2 = %.2f\n", x, y, result);

    return 0;
}

