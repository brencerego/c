#include<stdio.h>
int main()
{
   int a,b;
   printf("Enter any 2 integers:");
   scanf("%d%d",&a,&b);
   a=a-b;
   b=a+b;
   a=b-a;
   printf("After swapping a=%d,b=%d",a,b);
   return 0;
}
