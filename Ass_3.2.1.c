//Write a program  to make simple calculator -
//(operation include Addition, Subtraction, Multiplication, Division, modulo) 
#include<stdio.h>//Header file
main()
{
		int a,b;
		
		printf("Enter Value a :- ",a);
		scanf("%d",&a);
		
		printf("Enter Value b :- ",b);
		scanf("%d",&b);

		printf("Addition of a and b is :- %d", a+b);
		printf("\nSubtraction of a and b is :- %d", a-b);
		printf("\nMultiplication of a and b is :- %d", a*b);
		printf("\nDivision of a and b is :- %d", a/b);
		printf("\nModulo of a and b is :- %d", a%b);		
}