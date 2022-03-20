#include<stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int t[m][n];

    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
        scanf("%2d",&t[i][j]);
      }
    }
     printf("output array:\n");

    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
        printf("%4d",t[i][j]);
      }
              printf("\n");
    }
}


