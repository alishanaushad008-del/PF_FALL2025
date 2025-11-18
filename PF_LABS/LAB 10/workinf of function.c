#include<stdio.h>
void dowork (){
    printf("you have to work\n");
    //after dowork function ends it doesnt go back to main it goes back to the
    // fuction from where it was called
    //and end mein main py jataaur sab khatam
}
void freetime(){
    printf("you have freetime\n");
    dowork();
}
void work(){
    printf("you are in work\n");
    freetime();
 
}
int main(){
printf("you are in main\n");
work();//yeh function lazmi usky upar ho void work wala
}