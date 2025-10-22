#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int sum=0;
    int last_digit;
    while(n!=0){
    last_digit=n%10;
sum=last_digit+sum;
n=n/10;
    }
    printf("%d",sum);
}