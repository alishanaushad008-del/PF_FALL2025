#include<stdio.h>
int main(){
    int name[5];
    //input
    int*ptr=&name[0];//points to that value 
    for(int i=0;i<5;i++){
        printf("%d index:",i);
        scanf("%d",(ptr+i));//&name[i]
    }
    //
    for(int i=0;i<5;i++){
       printf("%d index= %d\n",i,*(ptr+i)) ;//we can also write &name[i]//this takes input 
       //and stores the value//array is a pointer
    }
}