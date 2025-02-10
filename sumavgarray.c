#include<stdio.h>
int main()
{
    int n,i,a[100];
    float avg,sum;
    printf("Enter the size of Arrays:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
       sum=sum+a[i];
    }
    avg=sum/n;
    printf("The sum and avg of all array elements are %f and %f",sum,avg);
    return 0;
}
