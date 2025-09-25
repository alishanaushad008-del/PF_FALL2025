#include<stdio.h>
int main()
{
    int x;
    printf("Enter you number:");
    scanf("%d",&x);
if(x%5==0){
    printf("Your number is divisible by 5");
}
else{
    printf("your number is not divisible by 5");
}
}