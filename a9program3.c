#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength)
{
	int iCnt=0;
	bool bFlag=false;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==11)
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
	
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(iSize*sizeof(int));
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter %d element",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
    bRet= Check(ptr,iSize);
	if(bRet==true)
	{
		printf("11 is present\n");
	}
	else if(bRet==false)
	{
		printf("11 is absent\n");
	}	
	free(ptr);
	
	return 0;
	
}
