#include<stdio.h>
int main(){
    int i=1;
    int j;
    while(i<=5){
        printf("Table of %d:\n",i);
    j=1;
    while(j<=10){
        printf("%d*%d=%d\n",i,j,i*j);
        j++;
    }
    printf("\n");
    i++;
}
}