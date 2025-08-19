#include <stdio.h>
#define PI 3.14159

int main()
 {
    float radius, area;

    // Prompt user for radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area
    area = PI * radius * radius;

    // Display result
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}