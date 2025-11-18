// 2. Write a function cube(int x) that takes one integer argument and returns its cube (x * x * x). 
//      In main(), ask the user for a number, call cube(), and print the result.
#include<stdio.h>
int cube(int x);
int main()
{
	int num;
	printf("\nEnter the number:  ");
	scanf("%d",&num);
	printf("The cube is: %d",cube(num));	
}
int cube(int x)
{
	return x*x*x;
}