#include<stdio.h>
int main()
{
    int n,a[100],i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("The elements of array are:");
    for(i=0;i<n;i++)
    printf("%d \t",a[i]);
    return 0;
}
