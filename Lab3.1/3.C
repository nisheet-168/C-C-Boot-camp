#include <stdio.h>

int main() {
    int m1, m2, m3;
    int total;
    float average;
    
    printf("Enter marks for three subjects (0 - 100):\n");
    
    printf("Subject 1: ");
    scanf("%d", &m1);
    if (m1 < 0 || m1 > 100) 
    {
        printf("Invalid input: marks must be between 0 and 100.\n");
        return 1;
    }

    printf("Subject 2: ");
    scanf("%d", &m2);
    if (m2 < 0 || m2 > 100) 
    {
        printf("Invalid input: marks must be between 0 and 100.\n");
        return 1;
    }
    printf("Subject 3: ");
    scanf("%d", &m3);
    if (m3 < 0 || m3 > 100) 
    {
        printf("Invalid input: marks must be between 0 and 100.\n");
        return 1;
    }
    total=m1+m2+m3;
    average = total/3;

    printf("Average marks = %.2f\n", average);

    return 0;
}
