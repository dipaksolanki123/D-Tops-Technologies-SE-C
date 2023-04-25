//Write a Program to convert years into days and days into years

#include<stdio.h>
main()
{
	int days, years; // To Convert Days into Years.
	printf("\nEnter Total Days :- ");
	scanf("%d",&days);
	
	years = days/365;
	
	days = (days%365)%7;
	
	printf("\n %d years", years);


	int year,day; // To Convert Years into Days.
	printf("\n\nEnter Total Year :- ");
	scanf("%d",&year);
	
	day = year*365;
	
	printf ("\n %d day",day);
	
}	