#include<stdio.h>
int main()
{
    int costprice,sellingprice;
    printf("Enter cost price");
    scanf("%d",&costprice);
    printf("Enter selling price");
    scanf("%d",&sellingprice);
    if(costprice>sellingprice){
    printf("loss");
    }
    if(sellingprice>costprice){
        printf("profit");
    }
    if (sellingprice==costprice){
        printf("No profit no loss");
    }
 
}

