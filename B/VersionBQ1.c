#include<stdio.h>

int main(void)
{
int i,j,k=97;

for(i=5;i>=1;i--)
{
    for(j=1;j<=i;j++)
	{
        printf("%c",k);
	}
	puts("");
	k++;
}
return 0;
}