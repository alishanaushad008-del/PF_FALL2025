#include<stdio.h>
int main(){
   
    for(int i=1;i<=500;i++){ 
         int number=i;
         int temporary=number;
    int sum_of_cube=0;
    int cube=0;
int remainder=0;
if(i<10 && i>1){
    printf("The Armstrong number is %d\n",i);
}
     
    while(temporary>0){
        remainder=temporary%10;
cube=remainder*remainder*remainder;
sum_of_cube=cube+sum_of_cube;
temporary=temporary/10;
    
}
    
if(number==sum_of_cube){
    printf("The Armstrong number is %d\n ",number);
}
    }
}