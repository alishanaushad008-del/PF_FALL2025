// Activity 1
#include <stdio.h>

int main() {
   float Celsius;
    printf("Enter temperature in celsius:");
    scanf("%f",&Celsius);
   float Fahrenheit;
   Fahrenheit = Celsius * 9/5 + 32;
    printf("temperature in Fahrenheit is:%.2f",Fahrenheit);
}

/*
Observations:
1. Input = 100°C  → Output = 212.00°F  (Boiling point of water)
2. Input = 0°C    → Output = 32.00°F   (Freezing point of water)
3. Input = -40°C  → Output = -40.00°F  (Same value in both scales)
*/