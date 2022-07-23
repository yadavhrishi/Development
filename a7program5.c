#include<stdio.h>

int CountDiff(int iNo)
{
	int iSumEven=0;
	int iSumOdd=0;
	int iDigit=0;
	int CountDiff=0;
	if(iNo>0)
	{
		iNo = -iNo;
	}	
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if((iDigit%2) ==0)
		{
			iSumEven=iSumEven+iDigit;
		}
		else if((iDigit%10) !=0)
		{
			iSumOdd = iSumOdd+iDigit;
		}	
		iNo = iNo/10;
	}
	CountDiff = iSumOdd - iSumEven;
	
	return CountDiff;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet= CountDiff(iValue);
	printf("Difference between Summation of even and odd numbers if %d\n",iRet);
	
	return 0;
}
