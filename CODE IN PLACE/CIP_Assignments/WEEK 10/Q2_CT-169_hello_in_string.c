#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello";
    char dest[10];

    // Copy src into dest using strcpy
    strcpy(dest, src);

    printf("Copied string: %s\n", dest);

    return 0;
}