#include<stdio.h>
float calculateWeeklySalary(int grade, float hrsWorked);
void printDetails(int grade, float hrsWorked, float salary);
int main(void)
{
	int grade;
	float hrs;
	printf("Enter your grade :");
	scanf("%d",&grade);
	printf("Enter no of hours worked during the week :");
	scanf("%f",&hrs);
	puts("");
	printDetails(grade,hrs,calculateWeeklySalary(grade,hrs));
	return 0;
}
float calculateWeeklySalary(int grade, float hrsWorked)
{
	float salary;
	if(grade == 1)
		salary = hrsWorked * 100.00;
	else if(grade == 2)
		salary = hrsWorked * 200.00; 
	else if(grade == 3)
		salary = hrsWorked * 300.00; 
	else
	{
		salary = 0.00;
		printf("You entered invalid grade");
	}
	return salary;
}
void printDetails(int grade, float hrsWorked, float salary)
{
	printf("The grade is %d\n",grade);
	printf("Hours worked was %.2fh\n",hrsWorked);
	printf("Weekly salary is Rs.%.2f\n",salary);
	return;
}