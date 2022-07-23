#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	int iFreq=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			iFreq++;
		}
	}
	
	
	return iFreq;
}

int main()
{
	int iSize=0;
	int *ptr=NULL;
	int iCnt=0;
	int iRet=0;
	int iValue=0;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(iSize*sizeof(int));
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter %d element",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	printf("enter another number \n");
	scanf("%d",&iValue);
	
    iRet= Frequency(ptr,iSize,iValue);
	printf("Frequency of %d is %d\n",iValue,iRet);
	free(ptr);
	
	return 0;
}
