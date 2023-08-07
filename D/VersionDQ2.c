#include<stdio.h>
float calculateTotalCost(int itemNo, int quantity);
void printDetails(int itemNo, int quantity, float totalCost);
int main(void)
{
int itemNo,qty;
printf("Enter item no :");
scanf("%d",&itemNo);
printf("Enter quantity :");
scanf("%d",&qty);
puts("");
printDetails(itemNo,qty,calculateTotalCost(itemNo,qty));
return 0;
}
float calculateTotalCost(int itemNo, int quantity)
{
	float total;
	if(itemNo == 1)
		total = quantity * 100.00;
	else if(itemNo == 2)
		total = quantity * 200.00;
	else if(itemNo == 2)
		total = quantity * 200.00;
	else
		{
			printf("You entered invalid item no !");
			total = 0.0;
		}
	return total;
}
void printDetails(int itemNo, int quantity, float totalCost)
{
	printf("Item no is %d\n",itemNo);
	printf("Quantity is %d\n",quantity);
	printf("Total cost is %.2f",totalCost);
	return;
}