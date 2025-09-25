#include<stdio.h>
int main()
{
    int x;
     printf("Enter number:");
     scanf("%d",&x);
     if(x%5==0){
       if(x%3==0){
        printf("Divisible by 5 and 3");
       }
       else{
        printf("Not divisible by 3");
       }
    }
       else{
        if(x%3==0){
            printf("Not divisibvle by 5");
        }
        else{
            printf("divisible by 5");
        }
       }
}