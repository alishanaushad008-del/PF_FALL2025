//Declare int, float, char and print values using pointers
#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'A';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Integer = %d\n", *p1);
    printf("Float = %.2f\n", *p2);
    printf("Char = %c\n", *p3);

    return 0;
}