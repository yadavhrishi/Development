#include<stdio.h>

int main()
{
	auto int iAge=0;
	
	printf("Enter your age\n");
	scanf("%d",&iAge);
	
	if((iAge>=0)&&(iAge<=10))
	{
		printf("Your ticket amount is:100\n");
	}
	else if((iAge>10)&&(iAge<=40))
	{
		printf("Your ticket price is:500");
	}
	else if((iAge>40))
	{
		printf("Your ticket amount is:300");
	}
	return 0;
}