#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int multiply(int x, int y) {
    if(y == 0) { return 0; }

    int z = multiply(x, floor(y/2));

    if (y % 2 == 0) 
    {
        return 2*z;
    } else {
        return x + 2*z;
    }
}

int main(int argc, char** argv) {
    
    int a, b;
    printf("Multiply:\nEnter the first number: \n");
    scanf("%d", &a);

    printf("Enter the second number: \n");
    scanf("%d", &b);

    printf("Result: %d\n", multiply(a, b));
  
    return 0;
}
