//Daynamic Triangle Pattern
#include<stdio.h>
main()
{
	
	int row,col,num;
	printf("\nEnter Value :- ");
	scanf("%d",&num);
	for(row=num;row>=1;row--)
	{
		for(col=1;col<=row;col++)
		{
			printf("*");
		}
		printf("\n");
	}
}