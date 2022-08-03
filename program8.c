#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
	int iCnt=0;
	int iMin=Arr[0];
	int iMax=Arr[0];
	int iDiff=0;
	
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]<iMin)
		{
			iMin=Arr[iCnt];
			
		}
	}
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]>iMax)
		{
			iMax=Arr[iCnt];
		}
	}

	iDiff=iMax-iMin;
	return iDiff;
}

int main()
{
	int iSize=0;
	int *ptr =NULL;
	int iCnt=0;
	int iRet=0;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(iSize*sizeof(int));
	
	printf("Enter the elements\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter elements %d: \n",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Difference(ptr,iSize);
	
	printf("%d is the difference\n",iRet);
	free(ptr);
	
	return 0;
}