#include <stdio.h>

int main()
{
    int n, result=0, q, rem;
    printf("Enter the numbers here :");
    scanf(" %d", &n);
    
    q = n;
    
    while(q != 0)
    {
    	rem = q%10;
    	result = result*10 + rem;
    	q = q/10;
    }
    if(result == n)
   {
   	printf("It is a palindrome.");
   }
   else
   {
   	printf("It is not a palindrome.");
   }

    return 0;
}
