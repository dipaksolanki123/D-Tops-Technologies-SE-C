//WAP to swap two numbers without using third variable 
#include<stdio.h>
main()
{
	//Swape the numbers
	int a,b;
	
	printf("\nEnter Value of a :- ");
	scanf("%d",&a);
	
	printf("\nEnter Value of b :- ");
	scanf("%d",&b);
	
	a=a+b; //30
	
	b=a-b; //10
	
	a=a-b; //20
	
	printf("\n\na=%d,\nb=%d",a,b);
}