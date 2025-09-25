#include<stdio.h>
int main()
{
    int x;
    printf("Enter you number:");
    scanf("%d",&x);
    if(x%5==0 || x%3==0){
        printf("Number is divisible by 5 or 3");
    }
    else{
        printf("Number is not divisile by 5 and 3");
    }
}