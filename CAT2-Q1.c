//program to define a structure named employee
/*
Author:GEDION KIMUTAI CHERUIYOT
Reg no:CT101/G/24133/24
Date:7/11/2024
*/
//preprocessor directive-printf(),scanf()

#include <stdio.h>

int main(){
	float hoursWorked;
	float hourlyWage;
	float grossPay;
	float taxes;
	float netPay;
	float overtimeHours;
	
	printf("Enter hours worked in a week:");
	scanf("%f",&hoursWorked);
	
	printf("Enter hourly wage:");
	scanf("%f",&hourlyWage);
	
	if(hoursWorked>40){
		overtimeHours=hoursWorked-40;
		grossPay=(40*hourlyWage)+(overtimeHours*hourlyWage*1.5);
	}
	else{
		grossPay=hoursWorked*hourlyWage;
	}
	
	if(grossPay<=600){
		taxes=grossPay*0.15;
	}
	else{
		taxes=(600*0.15)+((grossPay-600)*0.20);
	}
	netPay=grossPay-taxes;
	
	printf("Gross pay:$%.2f\n",grossPay);
	printf("Taxes:$%.2f\n",taxes);
	printf("Net pay:$%.2f\n",netPay);
	
	return 0;
}