#include<stdio.h>
int main()
{
char ch;
printf("Enter the character:");
scanf("%c",&ch);
if(ch>='A' && ch<='Z'){
    printf("An upper case letter");
}
else if(ch>='a' && ch<='z'){
     printf("A lower case letter");
}
else if(ch>='0' && ch<='9'){
    printf("A digit");
}
else{
    printf("Special Character");
}
}
