#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum=1;
    int a=1;
    int b=1;
    
    for(int i=1;i<=n;i++){
printf("The %d fibonacci is %d\n",i,a);

sum=a+b;
a=b;
b=sum;
      

    }

}