#include<stdio.h>
int main()
{
    int i,arr[5];
    float avg,s;
    printf("input five numbers\n");
    for(i=0;i<5;i++)
    {

        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d is the location %d\n",i+1,arr[i]);
        s=s+arr[i];
    }
    printf("The summation is %d",s);
    avg=s/5;
    printf("The avg is %f",avg);

}

