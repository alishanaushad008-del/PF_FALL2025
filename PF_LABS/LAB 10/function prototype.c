#include<stdio.h>

void freetime(){
    printf("you have freetime\n");
    void dowork();//function protype no problem becuz of this cuz we mentioned this
    dowork();//function calling
}
void dowork (){
    printf("you have to work\n");
}
void work(){
    printf("you are in work\n");
    freetime();
 
}
int main(){
printf("you are in main\n");
work();
}