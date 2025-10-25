#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int last_digit=0;
    int sum=0;
    while(n>0){
        last_digit=n%10;
        if(last_digit%2==0){
            sum=sum+last_digit;
       
        }
                    n=n/10;
    }
        printf("the sum is %d",sum);
    
}