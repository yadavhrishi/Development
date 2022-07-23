#include<stdio.h>
#include<stdlib.h>

int EvenFreq(int Arr[],int iLength)
{
	int iCnt=0;
	int iFreq=0;
	
	for(iCnt=1;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			iFreq++;
		}	
	}
	return iFreq;
}

int main()
{
	int iSize=0;
	int *ptr = NULL;
	int iCnt=0;
	int iRet=0;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(iSize*sizeof(int));
	
	printf("Enter the elements: \n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the element:%d \n",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet= EvenFreq(ptr,iSize);
	
	printf("Frequency of even numbers is %d\n",iRet);
	free(ptr);
	return 0;
}