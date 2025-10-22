#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int sum=0;
    int last_digit;
    while(n!=0){
       last_digit=n%10;
       if(n%2!=0){
        sum=sum+last_digit;
       }
        n=n/10;
    
    }
    printf("%d",sum);
}