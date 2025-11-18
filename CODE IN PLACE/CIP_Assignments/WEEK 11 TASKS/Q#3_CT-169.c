//Write a function swap(int *a, int *b) that swaps the values of two integers using pointers. 
//      In main(), declare two integers (e.g., x = 10, y = 20), print them, call swap(&x, &y), 
//      then print again to show they�ve been swapped.
#include<stdio.h>
void swap(int *a,int *b);
int main()
{
	int x=10,y=20;
	printf("\nx=%d\ny=%d",x,y);
	swap(&x,&y);
	printf("\nx=%d\ny=%d",x,y);
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a; // temp=x
	*a=*b;   // x=y
	*b=temp; // y=temp 
}
