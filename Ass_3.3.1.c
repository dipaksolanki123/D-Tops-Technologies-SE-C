// Write a program to find out the max number from given array using function

#include<stdio.h>
main()
{
	
	int Num1;
	printf("\nEnter Number1 :- ");
	scanf("%d",&Num1);
	
	int Num2;
	printf("\nEnter Number2 :- ");
	scanf("%d",&Num2);
	
	int Num3;
	printf("\nEnter Number3 :- ");
	scanf("%d",&Num3);
	if(Num1>Num2>Num3)
	{
		printf("Num1 is Maximum Number");
	}
	else if(Num2>Num3>Num1)
	{
		printf("Num2 is Maximum Number");	
	}
	else
	{
		printf("Num3 is Maximum Number");
	}
}