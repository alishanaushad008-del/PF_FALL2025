#include<stdio.h>
int main()
{
    int length,breadth,area,perimeter;
    printf("Enter length of rectangle:");
    scanf("%d",&length);
    printf("Enter breadth of rectangle:");
    scanf("%d",&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    if(area>perimeter){
    printf("Area is greater than perimeter");
    }
   else if(area<perimeter){
        printf("Area is less than perimeter");

    }
    else{
        printf("both are equal");
    }
}