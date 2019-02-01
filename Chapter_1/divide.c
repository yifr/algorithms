#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Tuple to hold integers:
typedef struct tuple {
    int quotient;
    int remainder;
} Tuple;

Tuple divide(int x, int y) {
    if(x == 0) 
    {
        Tuple tup = {0, 0};
        return tup;
    }

    Tuple tup = divide(floor(x / 2), y);
    tup.quotient *= 2;
    tup.remainder *= 2;

    if (x % 2 != 0) 
    {
        tup.remainder += 1;
    }

    if (tup.remainder >= y) 
    {
        tup. remainder -= y;
        tup. quotient += 1;
    }

    return tup;
}

int main(int argc, char** argv) {
    
    int a, b;
    printf("Divide:\nEnter the first number: \n");
    scanf("%d", &a);

    printf("Enter the second number: \n");
    scanf("%d", &b);
    
    Tuple tup = divide(a, b);
     
    printf("Result: \n\tQuotient = %d\n\tRemainder = %d\n", tup.quotient, tup.remainder);
  
    return 0;
}
