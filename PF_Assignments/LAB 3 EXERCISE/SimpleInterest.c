#include <stdio.h>

int main() 
{
    float principal, rate, time, simpleinterest;
    
    printf("Enter principal amount (between Rs.100 to Rs.1,000,000 ): ");
    scanf("%f", &principal);  
    if (principal < 100 || principal > 1000000) 
	{
        printf("Error! Principal Amount must be between Rs.100 to Rs.1,000,000\n");
       
    }
    printf("Enter rate of interest (between 5%% to 10%%): ");
    scanf("%f", &rate);
    if (rate < 5 || rate > 10) 
	{
        printf("Error! Rate must be between 5%% and 10%%.\n");
    }

    printf("Enter time period in years (between 1 to 10): ");
    scanf("%f", &time);
    if (time < 1 || time > 10) 
	{
        printf("Error! Time period must be between 1 and 10 years.\n");
    }

    simpleinterest = (principal * rate * time) / 100;
    printf("\nSimple Interest = %.3f Rs\n", simpleinterest);
    
}