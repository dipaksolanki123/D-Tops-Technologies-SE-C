//Write a program to find out the max from given number
#include<stdio.h>
int maxnum()
{
int x,y;
 printf("Enter Value of X :- "); //Enter Dynamic Value_1
 scanf("%d",&x);
 
 printf("Enter Value of Y :- "); //Enter Dynamic Value_1
 scanf("%d",&y);
 if(x>y) //Conditions
 	{
		printf("\n X is Maximum Number"); //Statement_1
		
	} 
	else
	{
		printf("\n Y is Maximum Number"); //Statement_2
	}
} 
main()
{
	maxnum(); //Function call
}