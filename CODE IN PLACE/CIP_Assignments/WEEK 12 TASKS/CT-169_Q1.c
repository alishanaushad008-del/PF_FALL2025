//Recursive function sumNatural(int n)
#include <stdio.h>

int sumNatural(int n) {
    if(n == 1)          // base case
        return 1;
    return n + sumNatural(n - 1);   // recursive call
}

int main() {
    int n = 5;
    printf("Sum = %d\n", sumNatural(n));   // Expected: 15
    return 0;
}