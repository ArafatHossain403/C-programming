#include<stdio.h>
int main()
{
    int m,n,i,j,s=0;
    scanf("%d %d",&m,&n);
    int t[m][n];
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
        scanf("%d",&t[i][j]);
      }
    }
     printf("output array:\n");

    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
           s = s + t[i][j] ;
      }
    }
    printf("the summation is: %d",s);
}


