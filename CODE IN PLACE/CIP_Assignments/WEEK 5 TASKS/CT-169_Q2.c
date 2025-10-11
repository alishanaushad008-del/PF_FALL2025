#include<stdio.h>
int main(){
    int department,year;
    printf("Enter Department:\n");
    printf("Computer Science\n");
    printf("2.Electrical Engineering\n");
    scanf("%d",&department);
    switch(department){
        case 1:
        printf("Your department is Computer Science\n");
        printf("Enter year:\n");
        printf("1.First year\n");
        printf("2.Second year\n");
        scanf("%d",&year);
        switch(year){
            case 1:
            printf("Your courses are :\n");
            printf("Introduction to C programming\n");
            printf("Calculus\n");
            printf("Discrete Mathematics\n");
            break;
            case 2:
             printf("Your courses are :\n");
            printf("Data Strucures\n");
            printf("Algorithms\n");
            printf("Object Oriented Programming\n");
            break;
            default:
            printf("Invalid input of year ");
        }
        break;
        case 2:
        printf("Your department is Electical Engineering\n");
        printf("Enter year:\n");
        printf("1.First year\n");
        printf("2.Second year\n");
        scanf("%d",&year);
        switch(year){
            case 1:
            printf("Your courses are :\n");
            printf("General Physics\n");
            printf("Circuit Analysis\n");
            printf("Electromagnetism\n");
            break;
            case 2:
             printf("Your courses are :\n");
            printf("Basic Electronics\n");
            printf("Digital Logic Design\n");
            printf("Signals and Systems\n");
            break;
            default:
            printf("Invalid input of year ");
        }
        break;
        default:
        printf("Invalid input\n");

        }
    }
