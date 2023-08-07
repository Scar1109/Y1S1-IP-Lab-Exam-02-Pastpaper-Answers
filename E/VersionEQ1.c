#include<stdio.h>
int main (void)
{
	int marks,min,max;

	printf("Enter marks :");
	scanf("%d",&marks);
	min = marks;
	max = marks;
	while(marks != -99)
	{
		if(marks<=0 || marks>=100 )
		{
			printf("You entered invalid!\n");
			printf("Reenter marks :");
			scanf("%d",&marks);
		}
		else
		{
			printf("Enter marks :");
			scanf("%d",&marks);
		}
		if(min>marks && marks < 100 && marks > 0)
			min = marks;
		if(max<marks && marks < 100 && marks > 0)
			max = marks;
	}
	printf("Max = %d\n",max);
	printf("Min = %d",min);
	return 0;
}