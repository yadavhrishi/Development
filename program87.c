#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{
	int iMask=147456;
	int iResult=0;
	
	iResult = iNo & iMask;
	
	if(iResult ==0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	int value =0;
	bool bret;
	printf("Enter the Number\n");
	scanf("%d",&value);
	
	bret = CheckBit(value);
	
	if(bret == true)
	{
		printf("5th & 18th Bit is on\n");
	}
	else
	{
		printf("5th and 18th Bit is off\n");
	}
	
	return 0;
}