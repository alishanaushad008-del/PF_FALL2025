#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int sum;
    int a=1;
    int b=1;
    for(int i=1;i<n-2;i++){
        if(n==1){
            printf("fibonacci of %d is %d",n,sum);
        sum=a+b;
        a=b;
        b=sum;
        }
   else(n==2){
    printf("fibonacci of %d is %d",n,sum);
        sum=a+b;
        a=b;
        b=sum;
        }
   }
   }
        
  
