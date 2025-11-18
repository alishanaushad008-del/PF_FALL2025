#include <stdio.h>
#include <string.h>

int main() {
    char str1[20];
    char str2[20];

    printf("Enter first string: ");
    scanf("%19s", str1);
    printf("Enter second string: ");
    scanf("%19s", str2);

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("String 1 is less than string 2.\n");
    } else {
        printf("String 1 is greater than string 2.\n");
    }

    return 0;
}