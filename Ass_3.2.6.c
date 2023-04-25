
//Write a program to print factorial of given number 


#include<stdio.h>
int factorial() // function declaration
{
	int n,f=1,i;
	printf("\nEnter a number :- ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)	
	{
		f=f*i;
	}
	return f; // return value
}
main()
{
	int ans;
	ans=factorial(); //function calling
	printf("\n factorial=%d",ans);
}