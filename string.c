#include<stdio.h>
#include<string.h>
int main()
{  char s[100];
//taking input
    gets(s);
    //to show the input
    puts(s);
    //condition to measure the length of the string
    int length = strlen(s);
    printf("the length of string is: %d",length);
}
