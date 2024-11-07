//program that request users to enter hours worked in a week
/*
Author:GEDION KIMUTAI CHERUIYOT
Reg no:CT101/G/24133/24
Date:7/11/2024
*/
//preprocessor directive
#include <stdio.h>
#include <string.h>

struct{
	char name[25];
	int id;
	char department[20];
	float salary;
	char email[50];
} employee;

int main(){
	strcpy(employee.name,"John Doe");
	strcpy(employee.department,"Human Resources");
	strcpy(employee.email,"john.doe@company.com");
	employee.id=12345;
	employee.salary=55000.50;
	
	printf("Name:%s\n",employee.name);
	printf("ID:%d\n",employee.id);
	printf("Department:%s\n",employee.department);
	printf("Salary:%.2f\n",employee.salary);
	printf("Email:%s\n",employee.email);
	
	
	
	
	
	
	
	
	
	return 0;
}
