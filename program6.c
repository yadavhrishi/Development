#include<stdio.h>
#include<stdlib.h>

int Largest(int Arr[],int iLength)
{
	int iCnt=0;
	int iMax=Arr[0];
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]>iMax)
		{
			iMax=Arr[iCnt];
		}	
	}
	return iMax;
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
	
	printf("Eter the elements\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter elements %d: \n",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Largest(ptr,iSize);
	
	printf("%d is the largest number\n",iRet);
	free(ptr);
	
	return 0;
}