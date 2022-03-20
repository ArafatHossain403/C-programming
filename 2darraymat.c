#include<stdio.h>
int main()
{
    int t[2][3],i,j;


    for(i=0;i<2;i++)
    {
      for(j=0;j<3;j++)
        {
        scanf("%2d",&t[i][j]);
      }
    }
     printf("output array:\n");

    for(i=0;i<2;i++)
    {
      for(j=0;j<3;j++)
        {
        printf("%4d",t[i][j]);
      }
              printf("\n");
    }

}

