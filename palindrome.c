#include<stdio.h>
int main()
{
    int n,rem,rev=0,original;
    printf("Enter the number to check the palindrome:");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
       rem=n%10;
       rev=(rev*10)+rem;
       n=n/10;
    }
    if(original==rev)
       printf("%d is Palindrome",original);
    else
       printf("%d is not a Palindrome",original);
    return 0;
}    
