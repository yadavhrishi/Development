#include<stdio.h>

void DisplayEven(int iNo)
{
	int i =0;
	
	for(i =1;i<=iNo/2;i++)
	{
		if(((iNo%i)==0) && ((i%2)==0))
		{
			printf("%d\n",i);
		}
	}
}

int main()
{
	int iValue =0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	DisplayEven(iValue);
	
	return 0;
}