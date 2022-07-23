#include<stdio.h>
#include<stdlib.h>

int FirstOccurence(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			break;
		}
	}
	
	return iCnt;
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
	
	printf("Enter another number\n");
	scanf("%d",&iValue);
	
    iRet= FirstOccurence(ptr,iSize,iValue);
	if(iRet==-1)
	{
		printf("There is no such number\n");
	}
	else
	{
		printf("%d First occured at %d",iValue,iRet);
	}
	free(ptr);
	
	return 0;
}
