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
           printf(" %4d",t[i][j]);
      }
printf("\n");
    }
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
           if(i==j)
           {
               s=s+t[i][j];
           }
      }

    }
    printf("the summation of diagonalis: %d",s);

}


