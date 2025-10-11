#include<stdio.h>
int main(){
    int a;
    int b;
    char operator;
    int result;
        printf("Enter a and b:");
        scanf("%d%d",&a,&b);
        printf("Enter operator +,-,*,/,%%");
        scanf(" %c", &operator);
        switch(operator){
            case '+':
            result=a+b;
            printf("The sum is %d",result);
            break;
            case '-':
             result=a-b;
            printf("The difference is %d",result);
            break;
            case '*':
             result=a*b;
            printf("The product is %d",result);
            break;
            case '/':

             if(b!=0){
                result=a/b;
                    printf("The division is %d",result);
             
             }
             else{
              printf("Cannot divide by zero");

             }
            break;
            case '%':
            if(b!=0){
                result=a%b;
                printf("The result is %d",result);
            }
            else{
          
                    printf("Cannot use modulus with zero");
            }
            
                break;
                default:
                printf("Invalid operator");
            
        }
      

    }
