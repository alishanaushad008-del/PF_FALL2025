//Print array elements using pointer only
#include <stdio.h>

int main() {
    int arr[5] = {1,2,3,4,5};
    int *p = arr;   // pointer to first element

    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));   // pointer arithmetic
    }

    return 0;
}