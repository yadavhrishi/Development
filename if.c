#include<stdio.h>

int main()
{
	int Marks=0;
	
	printf("Enter your marks\n");
	scanf("%d",&Marks);
	printf("your entered marks:%d\n",Marks);
	
	if(Marks >= 60)
	{
		printf("first class\n");
	}
	else
	{
		printf("not a first class\n");
		
	}
	

	return 0;
}