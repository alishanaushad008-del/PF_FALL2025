#include <stdio.h>
#include <string.h>

int main() {
    char firstName[] = "Alisha";
    char lastName[] = " Naushad";
    char fullName[20];

    // Copy first name into full name
    strcpy(fullName, firstName);

    // Concatenate last name with full name using strcat
    strcat(fullName, lastName);

    printf("Full Name: %s\n", fullName);

    return 0;
}