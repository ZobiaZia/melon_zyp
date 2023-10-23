#include<stdio.h>
int main()
{
	int a, b, result, i, n;
	a=0;
	b=1;
	printf("Enter a number :");
	scanf(" %d", &n);
	
	for(i = 1; i <= n; i++){
		result = a+b;
		a=b;
		b=result;
		
		if(result % 5 == 0) {
			printf("Buzz");
		}
		else {
			printf(" %d", result);
			}
	}
	return 0;
}
