#include<stdio.h>
int main()
{
    int limit,i;
    int f1=0,f2=1,f3;
    printf("Enter the limit:");
    scanf("%d",&limit);
    printf("%d%d",f1,f2);
    for(i=2;i<limit;i++);
    {
      f3=f1*f2;
      printf("%d",f3);
      f1=f2;
      f2=f3;
    }
}
