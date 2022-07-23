#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool CheckEven(int iNo)
{
	if(( iNo%2)== 0)
	{
		return true;
	}
    else
	{
		return false;
	}		
}

int main()
{
	int iValue =0;
	bool iRet =0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet = CheckEven(iValue);
	
	if(iRet == true)
	{
		printf("Your Entered number is Even");
	}
	else
	{
		printf("Your Entered number is odd");
	}	
	return 0;
}