#include<stdio.h>
int main(){
    int itemcost,discount,savedamount,amountafterdiscount;
     printf("Enter item cost:");
    scanf("%d",&itemcost);
    if(itemcost>=2000 && itemcost<=4000){
         discount=(itemcost*20)/100;
        amountafterdiscount=itemcost-discount;
       savedamount=discount;
        printf("\nActual amount:%d",itemcost);
         printf("\nSaved amount:%d",savedamount);
          printf("\namount after discount:%d",amountafterdiscount);
    }
    else if(itemcost>=4001 && itemcost<=6000){
         discount=(itemcost*30)/100;
        amountafterdiscount=itemcost-discount;
       savedamount=discount;
        printf("\nActual amount:%d",itemcost);
         printf("\nSaved amount:%d",savedamount);
          printf("\namount after discount:%d",amountafterdiscount);
    }
    else if(itemcost>6000){
         discount=(itemcost*50)/100;
        amountafterdiscount=itemcost-discount;
       savedamount=discount;
        printf("\nActual amount:%d",itemcost);
         printf("\nSaved amount:%d",savedamount);
          printf("\namount after discount:%d",amountafterdiscount);
    }
    else{
        printf("No discount");
    }
}


