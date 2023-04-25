//Write a Program to check if the given year is a leap year or not.

#include<stdio.h>
main()
{
	int year;
	printf("Enter the Year:- ");
	scanf("%d",&year);
	
	if(year%4==0){
		printf("This is Leap Year");
	}
	else
	{
		printf("This is not Leap Year");	
	}
	
}