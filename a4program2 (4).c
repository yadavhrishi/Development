#include<stdio.h>

int SumNonFact(int iNo)
{
	int iCnt=0;
	int iSum1=0;
	int iSum2=0;
	int iDiff=0;
	
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if(iNo%iCnt ==0)
		{
			iSum1=iSum1+iCnt;
		}
		else if(iNo%iCnt !=0)
		{
			iSum2=iSum2+iCnt;
		}
	
	}	
	iDiff=iSum2-iSum1;
	
	
	return iDiff;
}


int main()
{
	int iValue=0;
	int iRet =0;
	
	printf("enter the number\n");
	scanf("%d",&iValue);
	
	iRet=SumNonFact(iValue);
	
	printf("%d is Difference between all factors and non-factors",iRet);
	
	return 0;
}