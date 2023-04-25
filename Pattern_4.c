//Tringle Pattern using 0 and 1 numbers, Odd Numbers=0 and Even Numbers=1.
#include<stdio.h>
main()
{
	int row,col;
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			if(row%2==0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
}