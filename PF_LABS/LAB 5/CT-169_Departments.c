#include<stdio.h>
int main(){
    int department,subdepartment;
    printf("Enter departement:\n");
    printf("1.Computer Science\n");
    printf("2.Electrical Engineering\n");
    scanf("%d",&department);
    switch(department){
        case 1:
        printf("Your departemnt is computer science\n");
        printf("Enter sub department od computer sciemce:\n");
        printf("1.AI\n");
        printf("2.Data security\n");
        printf("3.Cybersecurity\n");
        scanf("%d",&subdepartment);
        switch(subdepartment){ 
        case 1:
        printf("Your subdepartment is AI");
        break;
        case 2:
        printf("Your subdepartment is Datasecurity");
        break;
        case 3:
        printf("Your subdepartment is Cybersec-urity");
     
        }
    
     case 2:
    printf("you department is Electrical Engineering");
    break;
    default:
    printf("Invalid input");
    }
    

}



    




    