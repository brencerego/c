#include<stdio.h>
int main()
{
   int temp,celcius;
   printf("Enter any temperature");
   scanf("%d",&temp);
   celcius=(temp-32)*5.0/9.0;
   printf("The temperature in celcius is %d",celcius);
   return 0;
}

