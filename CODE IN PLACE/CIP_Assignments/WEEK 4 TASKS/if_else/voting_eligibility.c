#include<stdio.h>
int main()
{
    int age;
     printf("Enter age:");
     scanf("%d",&age);
     if(age>=18){
        printf("eligible for voting");
     }
else{
    printf("Not eligible for voting");
}
}