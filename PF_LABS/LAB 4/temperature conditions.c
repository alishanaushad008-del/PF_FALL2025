#include<stdio.h>
int main(){
    int temperature;
    printf("Enter temperature in farenheit :");
    scanf("%d",&temperature);
    if(temperature>34 && temperature<=40){
       printf("Turn on the light");

    }
    else if(temperature<=34){
        printf("Sound a warning signal");

    }
    else{
        printf("no action");
    }


    }