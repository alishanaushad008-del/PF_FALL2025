//Interactive Challenge #2
#include <stdio.h>

int main() {
    int Side1,Side2,Side3;
    printf("Enter side 1:");
    scanf("%d",&Side1);
    printf("Enter side 2:");
    scanf("%d",&Side2);
    printf("Enter side 3:");
    scanf("%d",&Side3);
    if (Side1+Side2>Side3 && Side2+Side3>Side1 && Side1+Side3>Side2){
    if(Side1==Side2 && Side2==Side3){
        printf("The triangle is Equilateral");
    }
    else if(Side1==Side2 || Side2==Side3 ||Side1==Side3){
     printf("The triangle is Isosceles");
    }
     else if (Side1!=Side2 && Side2!=Side3 && Side1!=Side3){
         printf("The triangle is Scalene");
     }
    }
    else{
        printf("The triangle is not Valid");
    }
}
    
