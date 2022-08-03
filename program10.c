#include<stdio.h>
#include<stdlib.h>

int SumDigit(int iNo)
{
	int iCnt=0;
	int iDigit=0;
	int iSum=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;
	}
	return iSum;
}

void Sum(int Arr[],int iLength)
{
	int iDigit=0;
	int iCnt=0;
	int iRet=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iRet=SumDigit(Arr[iCnt]);
		printf("%d is summation of %d \n",iRet,Arr[iCnt]);
	}	
}

int main()
{
	int iSize=0;
	int *ptr =NULL;
	int iCnt=0;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(iSize*sizeof(int));
	
	printf("Enter the elements\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter elements %d: \n",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	Sum(ptr,iSize);
	
	free(ptr);
	
	return 0;
}