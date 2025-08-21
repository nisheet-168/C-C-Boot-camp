#include <stdio.h>

int main() 
{
    int i;
    int N =1;
    
    printf("Enter any Number:");
    scanf("%d",&N);
    
    do {
        printf("%d\n", i);
        i++;
       } 
    while (i <= N);

    return 0;
}
