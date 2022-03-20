#include<stdio.h>
int main()
{
    int num[5],max,i;
    printf("input five numbers for finding max num.\n");
    for(i=0;i<5;i++)
    {

        scanf("%d",&num[i]);
    }
    max=num[0];

    for(i=0;i<5;i++)
    {
       if(num[i]>max)
        max=num[i];

    }
        printf(" the max number is %d\n",max);
}
