#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{
	int iMask=4026531841;
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
		printf("first and last Bit is on\n");
	}
	else
	{
		printf("first and last Bit is off\n");
	}
	
	return 0;
}