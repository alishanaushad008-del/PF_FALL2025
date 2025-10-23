#include <stdio.h>

int main() {
    int testInteger = 3000000000;
    printf("Number is %d", testInteger);
/*The wrong value is displayed because 3000000000 exceeds the maximum limit of a 32-bit signed int (which is 2,147,483,647).
 This causes integer overflow, so the stored bits represent a negative number instead. 
 To fix it, use unsigned int or long long to handle larger values correctly.*/
}