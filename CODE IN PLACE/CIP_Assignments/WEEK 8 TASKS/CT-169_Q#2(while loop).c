#include<stdio.h>
int main(){
    int n;
    int reverse=0;
    printf("Enter a number :");
    scanf("%d",&n);
    while(n>0){
     reverse=(n%10)+reverse;
      reverse=reverse*10;
            n=n/10;

    }
    reverse=reverse/10;
   
    printf("%d",reverse);
}


