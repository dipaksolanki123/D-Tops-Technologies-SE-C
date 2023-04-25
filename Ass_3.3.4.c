// Write a program to find factorial using recursion 

#include<stdio.h>
int getfactorial(int x)
{
	if(x>1) //Conditions
	{
		return x*getfactorial(x-1); //return value
	}	
} 
main()
{
	printf("%d",getfactorial(7)); //function print
}