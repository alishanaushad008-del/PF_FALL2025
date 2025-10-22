#include<stdio.h>
int main(){
    int value_1;
    int value_2;
    int temp;

    printf("Enter value 1: ");
    scanf("%d",&value_1);
    printf("Enter value 2: ");
    scanf("%d",&value_2);

    printf("\nValues Before swapping:\n");
    printf("Value 1 = %d\n", value_1);
    printf("Value 2 = %d\n", value_2);

    temp=value_1;
    value_1=value_2;
    value_2=temp;

    //It prints the swapped values now
    printf("\nThe values after swapping are :\n");
    printf("Value 1 = %d\n", value_1);
    printf("Value 2 = %d\n", value_2);

}