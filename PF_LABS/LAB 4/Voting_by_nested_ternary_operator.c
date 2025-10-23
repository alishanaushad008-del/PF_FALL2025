#include <stdio.h>

int main() 
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    (age < 0 || age > 100) ? 
        printf("The Age must be between 0 and 100!\n") : 
        (age >= 18 ? 
            printf("You are eligible to vote!\n") : 
            printf("You are not eligible to vote!\n")
        );

    return 0;
}