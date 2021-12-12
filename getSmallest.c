#include <stdio.h>
int getSmallest(int x, int y){
    if (x < y){
        return x;
    }
    else{
        return y;
    }
}


int main(int argc, char const *argv[]){  

    int a,b,c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int z = getSmallest(a, getSmallest(b,c));

    printf("the result is %d\n", z);
    
    return 0;
}
