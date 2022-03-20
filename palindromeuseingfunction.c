#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i,j;
    gets(str1);
    int len1=strlen(str1);
    int len2=len1-1;
    //for making inverse of string
    for(i=0;i<len1;i++)
    {
        str2[i]=str1[len2];
        len2--;
    }
    //showing the inverse and input string
    str2[len1]='\0';
    puts(str1);
    puts(str2);
    //loop for finding string palindrome or not  using build in function
    if(strcmp(str1,str2)==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf(" Not Palindrome");
    }
}
