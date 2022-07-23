#include<stdio.h>

int Count(int iNo)
{
	int iDigit=0;
	int iCnt =0;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	while(iNo !=0)
	{
		iDigit = iNo%10;
		if(3<=iDigit<=7)
		{
			iCnt++;
		}
		iNo = iNo/10;
		
	}
	return iCnt;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet = Count(iValue);
	
	printf("There are %d numbers between 3 and 7\n",iRet);
	
	return 0;
}