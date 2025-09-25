#include<stdio.h>
int main()
{
 int x;
 printf("Enter your number");
 scanf("%d",&x);
 if(x>99 && x<1000){
    printf("Number is a three digit number");
 }
else{
    printf("Number is not a three digit number");
}
}