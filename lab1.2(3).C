#include <stdio.h>

int main()
 {
    float b,h, area;

    // Prompt user for radius
    printf("Enter the base of the triangme: ");
    scanf("%f", &b);
    
    printf("Enter the height of the triangle: ");
    scanf("%f", &h);

    // Calculate area
    area=0.5*(b*h);

    // Display result
    printf("The area of the traingel is: %.2f\n", area);

    return 0;
}