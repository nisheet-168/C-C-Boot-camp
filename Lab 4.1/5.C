#include <stdio.h>

int main() 
{
    int startYear, endYear;

    printf("Enter the starting year: ");
    scanf("%d", &startYear);

    printf("Enter the ending year: ");
    scanf("%d", &endYear);

    printf("Leap years between %d and %d are:\n", startYear, endYear);

    while (startYear <= endYear) 
    {
        if ((startYear % 4 == 0 && startYear % 100 != 0) || (startYear % 400 == 0)) 
        {
            printf("%d ", startYear);
        }
        startYear++;
    }

    return 0;
}
