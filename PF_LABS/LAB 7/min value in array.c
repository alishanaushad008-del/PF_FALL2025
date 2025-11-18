#include<stdio.h>//method 1
int main(){
        int arr[5]={4,8,78,9,3};
        int n=sizeof(arr)/4;
        int min=arr[0];
 for(int i=1;i<n;i++){//starting from second element becuz we already considered the earlier one
if(min>arr[i]){
    min=arr[i];
}

 }
 printf("%d",min);

}