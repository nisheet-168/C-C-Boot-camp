#include <stdio.h>

int main()
 {
    float radius, area;

    printf("Enter the radius of the square: ");
    scanf("%f", &radius);

    area =  radius*radius ;

    printf("The area of the square is: %.2f\n", area);

    return 0;
}

