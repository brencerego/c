#include <stdio.h>
int main()
{
    int num1,num2,sum,sub,prod;
    int choice;
    float div;
    printf("Enter any 2 numbers:");
    scanf("%d%d",&num1,&num2);
    printf("1.ADD:\n");
    printf("2.DIVISION:\n");
    printf("3.SUBTRACTION:\n");
    printf("4.PRODUCT:\n");
    printf("Enter a choice:");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:sum=num1+num2;
             printf("%d",sum);
             break;
      case 2:div=num1/num2;
             printf("%f",div);
             break;
      case 3:sub=num1-num2;
             printf("%d",sub);
             break;
      case 4:prod=num1*num2;
             printf("%d",prod);
             break;
      default: printf("Invalid Input:");
      }
  
  return 0;
}
            
