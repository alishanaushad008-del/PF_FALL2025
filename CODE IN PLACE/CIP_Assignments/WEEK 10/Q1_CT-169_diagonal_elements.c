 #include <stdio.h>
int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;
    int size = 3;

    // Calculate the sum of diagonal elements
    for (int i = 0; i < size; i++) {
        sum += arr[i][i];  // Primary diagonal
        if (i != size - i - 1) {  // Check for non-square center element
            sum += arr[i][size - i - 1];  // Secondary diagonal
        }
    }

    printf("Sum of diagonal elements: %d\n", sum);

    return 0;
}