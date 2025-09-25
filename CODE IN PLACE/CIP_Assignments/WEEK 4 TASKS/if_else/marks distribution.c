#include<stdio.h>
int main()
{
    int x;
    printf("Enter marks:");
    scanf("%d",&x);
    if(x>=90){
        printf("grade A");
    }
   else if(x>=80){
        printf("grade B");
    }
   else if(x>=70){
        printf("grade C");
    }
    else if(x>=60){
        printf("grade D");
    }
    else {
        printf("Fail");
    }
}