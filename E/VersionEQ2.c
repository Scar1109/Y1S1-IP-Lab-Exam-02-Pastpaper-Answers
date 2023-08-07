#include <stdio.h>
#define pi 3.14
float findRadianValue(float angleInDegrees);
void printRadianValues(void);

int main (void)
{
	printRadianValues();
	return 0;
}
float findRadianValue(float angleInDegrees)
{
	return pi/180.0*angleInDegrees;
}
void printRadianValues(void)
{
	int i;
	printf("%s%20s\n","Angle(degrees)","Angle(radians)");
	for(i=100;i<=200;i+=20)
		printf("%d%30.2f\n",i,findRadianValue(i));
	return;
}