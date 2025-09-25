//Interactive Challenge #3
#include<stdio.h>
int main()
{
    int bill,units;
    printf("Enter Electricity units:");
    scanf("%d",&units);
    if(units>=0 && units<=100){
    bill=(units*5);
    printf("Your Electricity bill is:%d",bill);
    }
    else if(units>=101 && units<=200) {
        bill=(100*5)+(units-100)*7;
        printf("Your Electricity bill is:%d",bill);
             } 
    else{
        bill=(100*5)+(100*7)+(units-200)*10;
        printf("Your Electricity bill is:%d",bill);
}
}