#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number){
    int count = 0;
    int i = 1;

    while (i <= number){
        if (number % i == 0){
            count++;
        }
        i++;
    }
    if (count <= 2){
        return true;
    }
    else {
        return false;
    }
}

int main(int argc, char const *argv[])
{
    int n, result;

    printf("Enter N: ");
    scanf("%d", &n);

    result = isPrime(n);

    if (result == true){
        printf("%d is Prime\n", n);
    } 
    else {
        printf("%d is not Prime\n", n);
    }
    
    return 0;
}
