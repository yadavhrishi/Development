#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	bool bFlag=false;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			bFlag = true;
			break;
		}
	}	
	return bFlag;
}

int main()
{
	int iSize=0;
	int *ptr=NULL;
	int iCnt=0;
	bool bRet=0;
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
	
    bRet= Check(ptr,iSize,iValue);
	if(bRet==true)
	{
		printf("%d is present\n",iValue);
	}
	else if(bRet==false)
	{
		printf("%d is absent\n",iValue);
	}	
	free(ptr);
	
	return 0;
	
}
