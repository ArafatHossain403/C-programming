#include<stdio.h>

int main()
{

    int i,j,row,col,sum=0;
    printf("Enter the number of rows and columns for 1st matrix\n");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of the matrix\n");
    int mat[row][col];
    //loop for taking input of matrix
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

//loop for showing of matrix

    printf("The matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }

//loop for calculating the boundary elements of the matrix
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            //making the condition for ony adding the boundaryu elements

            if(i==0||i==(row-1)||j==0||j==(col-1))
            {
                sum=sum+mat[i][j];
            }
        }
    }

    printf("The sum of boundary elements of a square matrix = %d\n",sum);
}



