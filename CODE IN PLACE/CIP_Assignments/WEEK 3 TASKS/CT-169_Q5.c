// Hands on Activity
#include <stdio.h>
int main() {
   float Celsius;
    printf("Enter temperature in celsius:");
    scanf("%f",&Celsius);
   float Fahrenheit;
   Fahrenheit = Celsius * 9/5 + 32;
   printf("The temperature in Fahrenheit is %.2f", Fahrenheit);
   if(Celsius>=30){
        printf("\nIt's hot!Stay hydrated and wear light clothes");
   }
    else if(Celsius>=20 && Celsius<=29){
        printf("\nNice weather! Perfect for outdoor activities");
    }
         else if(Celsius>=10 && Celsius<=19){
           printf("\nCool weather. Wear a light jacket");
    }
      else if(Celsius>=0 && Celsius<=9){
         printf("\nCold! Wear warm clothes");
      }
       else if(Celsius<0){
           printf("\nFreezing! Stay indoors and bundle up");
       } 
       return 0;
    }