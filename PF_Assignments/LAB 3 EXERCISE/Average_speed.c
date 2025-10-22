#include <stdio.h>

int main() {
    int hours;
    float d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0;
    float total_distance, average_speed;

    printf("Enter total hours the car traveled (1 to 5): ");
    scanf("%d", &hours);
    if (hours < 1 || hours > 5) {
        printf("Invalid input! Hours must be between 1 and 5.\n");
        return 0;
    }

    printf("Enter distance for hour 1: ");
    scanf("%f", &d1);
    if (d1 < 0) {
     printf("Distance cannot be negative!"); 
     }

    if (hours >= 2) {
        printf("Enter distance for hour 2: ");
        scanf("%f", &d2);
        if (d2 < 0) {
         printf("Distance cannot be negative!"); 
         }
    }
    if (hours >= 3) {
        printf("Enter distance for hour 3: ");
        scanf("%f", &d3);
        if (d3 < 0) {
             printf("Distance cannot be negative!"); 
             }
    }
    if (hours >= 4) {
        printf("Enter distance for hour 4: ");
        scanf("%f", &d4);
        if (d4 < 0) {
             printf("Distance cannot be negative!"); 
             }
    }
    if (hours == 5) {
        printf("Enter distance for hour 5: ");
        scanf("%f", &d5);
        if (d5 < 0) { 
            printf("Distance cannot be negative!"); 
         }
    }

    total_distance = d1 + d2 + d3 + d4 + d5;
    average_speed = total_distance / hours;

    printf("\nTotal Distance = %.2f miles", total_distance);
    printf("\nAverage Speed = %.2f miles/hour\n", average_speed);

    return 0;
}