#include<stdio.h>

int MultFact(int iNo)
{
	int iCnt=0;
	int iMult =1;
	
	if(iNo<=0)
	{
		iNo = -iNo;
		
	}
	
	for(iCnt =1;iCnt<=iNo/2;iCnt++)
	{
		if(iNo % iCnt ==0)
		{
			iMult = iMult * iCnt;
		}
	}
	
	return iMult;
}

int main()
{
	int iValue =0;
	int iRet =0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
    iRet=MultFact(iValue);
	printf("Multiplication of Factors is %d\n",iRet);
	
	return 0;
}