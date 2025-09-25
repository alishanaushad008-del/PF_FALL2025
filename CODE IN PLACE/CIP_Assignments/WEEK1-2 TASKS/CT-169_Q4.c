// Hands on Activity 1
#include <stdio.h>
int main() {
    float weight;
    float dosage;
    printf("Enter Patient's weight in kg:");
    scanf("%f",&weight);
    dosage=weight*0.8;
    printf("Dosage for the patient is: %.2f(mg)",dosage);
}