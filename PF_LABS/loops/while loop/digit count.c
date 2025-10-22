#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int count=0;
    while(n!=0){
        n=n/10;
        count=count+1;
    }
    printf("the number of digits are %d",count);
}
