#include<stdio.h>
float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount(int noOfGuests, float chargePerGuest, float discount);
int main(void)
{
int noOfGuests;
float chargePerGuest;

printf("Enter no of guests :");
scanf("%d",&noOfGuests);
printf("Enter charge per guest :");
scanf("%f",&chargePerGuest);
puts("");

printf("Discount : %.2f",getDiscountPrice(noOfGuests,chargePerGuest));
printf("Amount to be paid : %.2f",getAmount(noOfGuests,chargePerGuest,getDiscountPrice(noOfGuests,chargePerGuest)));
return 0;
}
float getDiscountPrice(int noOfGuests, float chargePerGuest)
{
    if(noOfGuests>=200)
        return noOfGuests * chargePerGuest * 10 / 100.00;
    else
        return 0;
}
float getAmount(int noOfGuests, float chargePerGuest, float discount)
{
    return noOfGuests * chargePerGuest - discount;
}