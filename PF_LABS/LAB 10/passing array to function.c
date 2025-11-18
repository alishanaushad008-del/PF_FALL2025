#include<stdio.h>
void change(int x[]){ //it refers to the same array//size writing here is not necessary
    //  int n=sizeof(x)/sizeof(x[0]);
    // printf("%d\n",n);//in this sizeof cant be done and it gives wrong answer
 x[2]=90;
}
int main(){
    int arr[]={5,2,7,8,3};
    int n=sizeof(arr)/sizeof(arr[0]);//its the size of array
    printf("%d\n",n);
    change(arr);
    printf("%d",arr[2]);//for arrays it is pass by reference
    // int x=6;
    // change(x);
    //  printf("%d",x);//pass by value for this because alg dabba bn rha
}