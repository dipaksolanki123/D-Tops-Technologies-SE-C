
//Write a program of structure employee that provides the following information -print and display empno, empname, address and age 

#include<stdio.h>
struct Person // Declaration of structure and total size of structure is 28 bytes 
{
	int id;
	char name[20];
	float salary;
};
main()
{
	struct Person p;
	//scanf("%d %s %f", &p.age, &p.name, &p.salary); //<---This First Method
	//printf("Age=%d\nName=%s\nsalary=%f",p.age, p.name, p.salary); //<---This First Method
	
	printf("Enter your id :-"); //<---This Second Method
	scanf("%d",&p.id);
	printf("ID=%d",p.id);
	
	printf("\nEnter your name :-"); //<---This Second Method 
	scanf("%s",&p.name);
	printf("name=%s",p.name);
	
	printf("\nEnter your salary :-"); //<---This Second Method 
	scanf("%f",&p.salary);
	printf("salary=%f",p.salary);
}
