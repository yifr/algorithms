/* Modular Exponentiation implemented in O(n^3) 
   In cryptosystems, there's often a need to compute x^y mod N for incredibly large values of 
   x, y and N.
   Because the result of x^y % N is still potentially hundreds of bits long, we can simplify the 
   process by starting with x and repeatedly sqauring mod N:
        x % N -> x^2 % N -> x^4 % N -> x^2^floor(log(y)) % N
    All of these calculations take O(log^2 N) time to complete, for a total of O(n^3)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int modexp(x, y, N) {
    if (y == 0) { return 1; }

    int z = modexp(x, floor(y/2), N);

    if (y % 2 == 0) 
    {
        return z*z % N;
    } else {
        return x * z*z % N;
    }
}

int main(int argc, char** argv) {

    int x, y, N;

    printf("Modular Exponentiation - Returns x^y mod N.\nx = ?\n");
    scanf("%d", &x);

    printf("y = ?\n");
    scanf("%d", &y);

    printf("N = ?\n");
    scanf("%d", &N);

    printf("Result: %d\n", modexp(x, y, N));

    return 0;
}
