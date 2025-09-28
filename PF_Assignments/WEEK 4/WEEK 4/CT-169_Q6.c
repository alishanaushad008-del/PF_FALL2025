#include <stdio.h>

int main() {
    float total_calories, fat_grams;

    printf("Enter total calories: ");
    scanf("%f", &total_calories);

    printf("Enter fat grams: ");
    scanf("%f", &fat_grams);

    // Check for invalid input
    if (total_calories < 0 || fat_grams < 0) {
        printf("Calories and fat grams cannot be less than zero.\n");
        return 0;
    }

    float calories_from_fat = fat_grams * 9;

    if (calories_from_fat > total_calories) {
        printf("Calories from fat cannot exceed total calories.\n");
        return 0;
    }

    float percentage_fat = (calories_from_fat / total_calories) * 100;

    printf("Calories from fat: %.2f\n", calories_from_fat);
    printf("Percentage of calories from fat: %.2f%%\n", percentage_fat);

    if (percentage_fat < 30) {
        printf("This food is low in fat.\n");
    } else {
        printf("Check your diet.\n");
    }

    return 0;
}