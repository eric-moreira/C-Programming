#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int i, factorial = 1;


    printf("Enter N: ");
    scanf("%d", &n);

    i = 1;

    while (i <= n){
        factorial = factorial * i;
        i++;
    }

    printf("Factorial of %d is %d \n", n, factorial);
    
    return 0;
}
