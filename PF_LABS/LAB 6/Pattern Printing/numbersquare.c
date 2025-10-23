#include<stdio.h>
 int main(){
int n;
int j;
printf("enter a number :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=4;j<=n;j++){
        printf("%d",j);
    }
    printf("\n");
}
 }