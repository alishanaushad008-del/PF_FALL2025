#include<stdio.h>
int main()
{
    int x;
     printf("Enter number:");
     scanf("%d",&x);
     if(x%5==0 || x%3==0){
        if(x%15!=0){
            printf("Divisible by 5 or 3 but not 15");
        }
            else{
                printf("Divisible by 15");
            }
     }
            else{
                printf("not divisible by 5 or 3");
            }

        }
   