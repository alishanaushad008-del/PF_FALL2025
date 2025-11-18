#include<stdio.h>
#include<limits.h>

int main(){
    int arr[3][3]= {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
        for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int max = INT_MIN;

    for(int i = 0; i < 3; i++){   
        for(int j=0;j<3;j++){
        if(max < arr[i][j]){
            max = arr[i][j];
        }
        }
    }

    printf("max is %d", max);
}