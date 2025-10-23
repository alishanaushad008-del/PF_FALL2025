#include<stdio.h>
int main(){
    int tax_rate;
    int tax;
    int salary;
    printf("Enter salary :");
    scanf("%d",&salary);
    printf("Enter tax rate");
    scanf("%d",&tax_rate);
    tax=(salary*tax_rate)/100;
    salary=salary-tax;
    printf("Tax to be paid: %d\n", tax);
    printf("The salary he/she has to pay after tax is:%d",salary);
    }
