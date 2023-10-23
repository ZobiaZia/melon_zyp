#include <stdio.h>

int main()
{
	int num;
	int count;
    printf("Enter the numbers.");
    scanf(" %d",&num);
    
    while(num != 0) {
    	num /= 10;
    	count++;
    }
    
    printf("Digits : %d",count);

    return 0;
}
