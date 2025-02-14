#include<stdio.h>
int main()
{
    int n, r, armstrong, sum = 0;

    printf("enter n\n");
    scanf("%d", &n);
    
    armstrong = n; 
    
    while(n != 0)
    {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }


        if(armstrong == sum)
        {  
          printf("%d is an Armstrong number\n", armstrong);
        }    
        else
        {
          printf("%d is not an Armstrong number\n", armstrong);
        }    
    
  
  return 0;
}
