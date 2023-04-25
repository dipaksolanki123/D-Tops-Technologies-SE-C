
// WAP to take 10 no. Input from user and find out :-  
// 1. How many Even numbers are there . 
// 2. How many odd numbers are there .

#include<stdio.h>
main()
{
	int Numbers;
	printf("\nEnter Number :- ");
	scanf("%d",&Numbers);
	if(Numbers%2==0)
	{
		printf("Even Number");
	}
	else
	{
		printf("Odd Number");	
	}
}