#include<stdio.h>
int main()
{
    int x;
    printf("Enter year:");
    scanf("%d",&x);
if(x%4==0){
    printf("leap year");
}
else{
    printf("Not a leap year");
}
}