#include<stdio.h>

int CountFour(int iNo)
{
	int iCnt=0;
	int iDigit=0;
	
	if(iNo<0)
	{
		iNo= -iNo;
	}
	
	while(iNo!=0)
	{
		iDigit = iNo%10;
		iNo = iNo/10;
		if(iDigit ==4)
		{
			iCnt++;
		}	
	}

	return iCnt;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=CountFour(iValue);
	printf("Frequency of 4 is: %d\n",iRet);	
	
	return 0;
}