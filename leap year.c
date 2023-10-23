#include<stdio.h>
int main()
{
	int year;
	printf("Enter any year to find if its a leap year or not.");
	scanf(" %d",&year);
	
	if(year % 400 == 0)
	{
		printf("The year %d is a leap year.", year);
		
	}
	else
	{
		if(year % 100 == 0)
		{
			printf("The year %d is not a leap year.", year);
		}
		else
		{
			if(year % 4 == 0)
			{
				printf("The year %d is a leap year.", year);
			}
			else
			{
				printf("The year is not a leap year.");
			}
		}
	}
	return 0;
}
