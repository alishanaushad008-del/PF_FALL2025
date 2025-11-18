#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Programming";
    char dest[5];  // Size is 5 to accommodate 4 chars + '\0'

    // Copy first 4 characters from src to dest using strncpy
    strncpy(dest, src, 4);
    dest[4] = '\0';  // Ensure null termination

    printf("Copied string: %s\n", dest);

    return 0;
}