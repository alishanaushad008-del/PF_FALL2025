#include<stdio.h>
int main () {
    int n;
   printf("Enter a number: ");
   scanf("%d",&n);
 float a=100;
for(int i=1;i<=n;i=i+1){
    
        printf("%.2f\n",a);
        a=a/2;

}
}