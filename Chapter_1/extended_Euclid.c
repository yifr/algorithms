/* Input: Two positive integers a and b with a >= b >= 0
   Output: Integers x, y, d such that d - gcd(a, b), and ax + by = d
   
   Satisfies the lemma: 
        If d divides both a and b, and d = ax + by for some integers x and y, then d = gcd(a,b)
*/

#include <stdio.h>
#include <math.h>

typedef struct tuple {
    int x;
    int y; 
    int d;
} Tuple;

Tuple extended_euclid(int a, int b) {
    if (b == 0) 
    { 
        Tuple tup = {1, 0, a};
        return tup;
    }

    Tuple tup = extended_euclid(b, a % b);
    int temp = tup.y;
    tup.y = tup.x - floor(a / b) * tup.y;
    tup.x = temp;

    return tup;
}


int main(int argc, char** argv) {
    int a, b;

    printf("Extended Euclid. \n\nInput: a >= b >= 0.\nOutput: Integers x, y, d such that d = gcd(a,b) and ax + by = d.\n");
    printf("\tEnter a: ");
    scanf("%d", &a);

    printf("\tEnter b: ");
    scanf("%d", &b);

    Tuple tup = extended_euclid(a, b);

    printf("x = %d, y = %d, d = %d\n", tup.x, tup.y, tup.d);
}

