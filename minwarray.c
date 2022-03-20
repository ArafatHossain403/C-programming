#include<stdio.h>
int main()
{
    int num[5],min,i;
    printf("input five numbers for finding min num.\n");
    for(i=0;i<5;i++)
    {

        scanf("%d",&num[i]);
    }
    min=num[0];

    for(i=0;i<5;i++)
    {
       if(num[i]<min)
        min=num[i];

    }
        printf(" the min number is %d\n",min);
}
