#include<stdio.h>

int main(void)
{
int i,j,k;

for(i=1;i<=2;i++)
{
    for(j=1;j<=2;j++)
	{
        for(k=1;k<=2;k++)
		{
        printf("\n[ %d %d %d ]",i,j,k);
		}
	}
}
return 0;
}