#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    int sum = 0;
    
    printf("Enter N: ");
    scanf("%d", &number);
    int aux = number;
    while ( number > 0){     
        sum = sum + (number % 10);
        printf ("%d\n", sum);
        number /= 10;
    }

    printf("Sum of the digits of %d is %d\n", aux, sum);
    return 0;
}
