#include <stdio.h>

int main(void) {
    int a, b, c, temp, min;

    printf("Enter first Number :");
    scanf("%d",&a);
    printf("Enter second Number :");
    scanf("%d",&b);
    printf("Enter third Number :");
    scanf("%d",&c);
    temp = (a < b) ? a : b;
    min = (c < temp) ? c : temp;

    printf("The minimum of the three numbers is: %d\n", min);
    return 0;
}
