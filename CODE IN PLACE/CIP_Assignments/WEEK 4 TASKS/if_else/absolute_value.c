#include<stdio.h>
int main()
{
    int x;
    printf("Enter your number:");
    scanf("%d",&x);
    if(x<0){
        x=x*(-1);
    }
printf("The absolute value is:%d",x);
}