#include<stdio.h>
int main()
{
    int i,arr[5];
    //int arr [10]={10,20,30,40,50,60,70,80,90,100};
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d is the location %d\n",i+1,arr[i]);
    }
}
