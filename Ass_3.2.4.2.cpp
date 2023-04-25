//WAP to show Vowel or Consonant using switch case .


#include<stdio.h>
main()
{
	
	char Alphabate;
	printf("\nEnter a character :- ");
	scanf("%c",&Alphabate);
	
	switch(Alphabate)
	{
		case 'a':
			printf("Vowel");
			break;
			
		case 'e':
			printf("Vowel");
			break;
			
		case 'i':
			printf("Vowel");
			break;
			
		case 'o':
			printf("Vowel");
			break;
			
		case 'u':
			printf("Vowel");
			break;
			
		default:
			printf("Consonant");
		
	}
}
