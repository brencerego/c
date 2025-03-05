#include<stdio.h>
int main(void)
{
  int num1,num2;
  printf("Enter 2 numbers");
  scanf("%d%d",&num1,&num2);
  if(num1>num2)
    printf("%d is largest",num1);
  else
     printf("%d is largest",num2);
  return 0;
}
