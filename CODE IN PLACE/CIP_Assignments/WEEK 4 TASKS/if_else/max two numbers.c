#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value of a and b:");
    scanf("%d %d",&a,&b);
if(a!=b){
    printf("a and b are not equal\n");
    if(a>b){
        printf("a is greater");
    }
    else{
        printf("b is greater");
    }
}
else{
    printf("both a and b are equal");
}
}
