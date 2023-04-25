//WAP to find number is even or odd using ternary operator 

#include<stdio.h>
main()
{
	int Numbers;
	printf("\nEnter Number :- ");
	scanf("%d",&Numbers);
	
	(Numbers%2==0) ? printf("\nEven Number") : printf("\nOdd Number");
	
}
