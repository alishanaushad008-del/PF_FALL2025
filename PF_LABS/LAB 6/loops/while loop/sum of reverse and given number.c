#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int sum=n;
    int reverse=0;
    while(n>0){
        
        reverse=reverse*10;
     reverse=(n%10)+reverse;
            n=n/10;

    }
    
    sum=reverse+sum;
   
    printf("%d",sum);
}