#include<stdio.h>//pass by value/pass by reference
void swap(int x,int y){//new variables of x and y
int temp=x;
x=y;
y=temp;//swapping is done here of this function only
}
//---------------------------------------------------
int main(){
    int x;
    int y;//these x and y are local variables
    printf("enter first number :");
    scanf("%d",&x);
    printf("enter secondnumber :");
    scanf("%d",&y);
swap(x,y);//these are values//pass x and y
    printf("first variable is %d and second is %d",x,y);//here this prints again those value
}