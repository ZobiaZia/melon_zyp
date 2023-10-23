#include<stdio.h>
#include<math.h>
int main()
{
	int n, d;
	printf("Enter the numbers here :");
	scanf(" %d",&n);
	
	d = (int)log10(n)+1;
	
	printf("Digits :%d" ,d);
	
	return 0;
}
