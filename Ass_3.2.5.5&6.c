//Sum of even numbers  and Sum of odd numbers 
#include<stdio.h>
main()
{
	int n,i;
	int ecount=0;
	int ocount=0;
	
	int esum=0;
	int osum=0;
	
	for(i=0;i<=5;i++)
	{
		printf("Enter number :- ");
		scanf("%d",&n);
		if(n%2==0)
		{
			ecount+=1;
			esum+=n;
		}
		else
		{
			ocount+=1;
			osum+=n;
		}
		
	}
	printf("\n even count= %d",ecount);
	printf("\n odd count= %d",ocount);
	
	printf("\n even sum = %d",esum);
	printf("\n even sum = %d",osum);	
	
}