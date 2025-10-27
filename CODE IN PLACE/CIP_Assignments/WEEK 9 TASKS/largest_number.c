#include <stdio.h>

int main() {
    int n, i;
    int first, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];   

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    first = second = arr[0];

    
    for(i = 1; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } 
        else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    printf("Two largest numbers are: {%d, %d}", second, first);

}