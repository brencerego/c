#include<stdio.h>

void PassByRef(int *value1,int *value2);
void PassByValue(int value1, int value2);

int main()
{
    int num1,num2;
    printf("Enter two numbers \n:");
    scanf("%d%d",&num1,&num2);
    PassByValue(num1,num2);
    PassByRef(&num1,&num2);
    return 0;
}

void PassByRef(int *value1,int *value2)
{
     printf("%d and %d", *value1, *value2);
     return;
}

void PassByValue(int value1, int value2)
{ 
     printf("%d and %d", value1, value2);
     return;
}
