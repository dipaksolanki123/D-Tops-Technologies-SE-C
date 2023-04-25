 // Write a Program to find of string using recursion 
 
 
#include<stdio.h>
int print_1to10(int x)
{
	if(x<=10) //Condition
	{
		printf("%d\n",x); //code
		print_1to10(x+1); //function name
	}
}
main()
{
	print_1to10(1); //function call
}