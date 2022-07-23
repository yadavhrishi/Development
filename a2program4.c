#include<stdio.h>

void Display(int iNo,int iFrequency)
{
	int iCnt = 0;
	for(iCnt =1;iCnt<=iFrequency;iCnt++)
	{
		printf("%d\n",iNo);
	}	
}

int main()
{
	int iValue1 =0;
	int iValue2 =0;
	
	printf("Enter first number\n");
	scanf("%d",&iValue1);
	
	printf("Enter Second number\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}