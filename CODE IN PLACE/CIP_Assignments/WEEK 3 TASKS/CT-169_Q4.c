// Activity 4
#include <stdio.h>

int main() {
 float a;
 float b;
  printf("Enter numerator:");
  scanf("%f",&a);
  printf("Enter denominator:");
  scanf("%f",&b);
  if(b==0){
  printf("Error message");
  }
  else{
      float result=(a/b);
      printf("Division result is:%.2f",result);
     
  }
}
