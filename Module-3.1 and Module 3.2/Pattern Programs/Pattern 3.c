#include<stdio.h>

int main()
{
	
	int i,j,p;
	for(i=1;i<=5;i++)
	{
		for(p=1;p<=5-i;p++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}
