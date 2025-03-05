#include<stdio.h>
 int main(void)
 {
  int num1,num2,num3;
  float avg,sum;
  printf("Enter three numbers:");
  scanf("%d%d%d", &num1 , &num2 , &num3);
  sum=(num1+num2+num3);
  avg=sum/3;
  printf("Average of numbers are:%f",avg);
  return 0;
 }
