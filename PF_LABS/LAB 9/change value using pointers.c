#include<stdio.h>
int main(){
    int x=3;
    int* z=&x;
    //now to change value without chaging x or assigning it new value
    //we use *
    printf("%d\n",x);
       printf("%d\n",*z);// not only prints value of x but also change
       *z=5;
       printf("%d",*z);//updated value of x
}