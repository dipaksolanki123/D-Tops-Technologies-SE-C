//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array 
#include<stdio.h>
main()
{
	int a[2][3]={1,2,3,9,5,6};
	int b[2][3]={6,7,8,4,1,5};
	int c[2][3];
	int d[2][3];
	int e[2][3];
	int i,j;
	
	printf("\nFirst Matrix :-\n");
	
	for(i=0;i<2;i++)//i=colum
	{
		for(j=0;j<3;j++)//j=row
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
		printf("\nSecond Matrix :-\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\nAddition Matrix :- \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j] + b[i][j];
			printf(" %d ",c[i][j]);
		}
		printf("\n");
	}
	printf("\nSubtraction Matrix :- \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j] - b[i][j];
			printf(" %d ",c[i][j]);
		}
		printf("\n");
	}
	printf("\nMultiplication Matrix :- \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j] * b[i][j];
			printf(" %d ",c[i][j]);
		}
		printf("\n");
	}
}