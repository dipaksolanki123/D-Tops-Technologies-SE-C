//Write a Program to find simple interest 

#include<stdio.h>
main()
{
	int cp,sp,amt;
	printf("\nEnter cost Price :- ");
	scanf("%d",&cp);
	
	printf("\nEnter selling Price :- ");
	scanf("%d",&sp);
	
	if(sp>cp)
	{
		amt=sp-cp;
		printf("\nProfit = %d",amt);
	}
	else if(cp>sp)
	{
		amt=cp-sp;
		printf("\nLoss = %d",amt);	
	}	
	else{
		printf("\nNo Profit and No Loss");
	}
}