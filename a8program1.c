#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
	int iCnt=0;
	int iSumEven=0;
	int iSumOdd=0;
	int iDiff=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			iSumEven = iSumEven+Arr[iCnt];
		}
		else if((Arr[iCnt]%2) !=0)
		{
			iSumOdd = iSumOdd+Arr[iCnt];
		}
	}
	iDiff = iSumEven-iSumOdd;
}

int main()
{
	int iSize=0;
	int iRet=0;
	int iCnt=0;
	int *ptr=NULL;
	
	printf("Enter number of elements\n");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(iSize * sizeof(int));
	
	printf("Enter Elements\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	iRet = Difference(ptr,iSize);
	printf("Result is %d",iRet);
	
	free(ptr);
	
	return 0;
}