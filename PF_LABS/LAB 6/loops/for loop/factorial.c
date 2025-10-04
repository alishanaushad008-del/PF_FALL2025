#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int product=1;
    for(int i=n;i<=n;i++){
        product=product*i;
printf("the factorial of %d is: %d\n",i,product);
}
}