#include <stdio.h>
int main()
{
   int j,n;
   printf("Input the number to show the table  : ");
   scanf("%d",&n);
   printf("\n");
   for(j=1;j<=10;j++)
   {
     printf("%d X %d = %d \n",n,j,n*j);
   }
}
