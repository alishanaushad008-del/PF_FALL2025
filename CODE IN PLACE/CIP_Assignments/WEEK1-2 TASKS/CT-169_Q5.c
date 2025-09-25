// Hands on Activity 2
#include <stdio.h>
int main() {
    float watts;
    float kilowatts;
    printf("Enter Electrical power in watts:");
    scanf("%f",&watts);
    kilowatts = watts / 1000;
    printf("Electrical power in kilowatts is:%.2f KW",kilowatts);
}