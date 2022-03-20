#include<stdio.h>
int main()
{
    int num[100],min,i,n,nu,flag=0;
    printf("input  numbers for finding number.\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&num[i]);
    }

     printf("input the number want to search.\n");
     scanf("%d",&nu);
    for(i=0;i<n;i++)
    {
       if(num[i]==nu)
       {
        flag=1;
        break;
       }
        else{
            flag=0;
        }
    }
        if(flag==1)
            printf("found");
        else
            printf("not found");
}

