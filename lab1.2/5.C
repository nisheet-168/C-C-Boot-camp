#include <stdio.h>
#define PI 3.14159

int main()
 {
    float radius,perimeter;

    // Prompt user for radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area
    perimeter = 2* PI * radius;

    // Display result
    printf("The perimiter of the circle is: %.2f\n", perimeter);

    return 0;
}
