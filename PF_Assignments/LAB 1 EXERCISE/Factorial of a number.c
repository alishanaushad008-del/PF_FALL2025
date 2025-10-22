#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial does not exist for negative numbers.\n");
    } else {
        int result = factorial(n);
        printf("The factorial of %d is %d\n", n, result);
    }

    return 0;
}
