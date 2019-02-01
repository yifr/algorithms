/* Simple implementation of Euclid's recursive algorithm for finding a greatest common divisor:
        gcd(x,y) = gcd(x mod y, y)
    Runs in O(n^3 time).
*/

#include <stdio.h>

int gcd(a, b) {
    if (b == 0) { return a; }

    return gcd(b, a % b);
}

int main(int argc, char** argv) {
    int a, b; 
    
    printf("Euclid's, GCD - returns greatest common divisor between integers a and b.\n");
    printf("Enter a: \n");
    scanf("%d", &a);

    printf("Enter b: \n");
    scanf("%d", &b);

    printf("Result: %d\n", gcd(a, b));

    return 0;
}
