// WAP that tells whether a given year is a leap year or not.
#include <stdio.h> 

int leap_year(int year) 
{
	if (year % 400 == 0)
		return 1;
	else if (year % 100 == 0) 
		return 0; 
	else if (year % 4 == 0) 
		return 1; 
	else
		return 0;
} 

int main() 
{ 
	int year;
    printf("Enter year : ");
    scanf("%d",&year);
    // int a=leap_year(year);
	if(leap_year(year))
		printf("%d is a leap year.\n", year);
	else
		printf("%d is not a leap year.\n", year); 
	return 0; 
}
