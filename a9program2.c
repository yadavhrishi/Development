#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
	int iCnt=0;
	int iEven=0;
	int iOdd=0;
	int iDiff=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			iEven++;
		}
		else if(Arr[iCnt]%2 !=0)
		{
			iOdd++;
		}
	}
	iDiff = iEven-iOdd;
	
	return iDiff;
}

int main()
{
	int iSize=0;
	int *ptr=NULL;
	int iCnt=0;
	int iRet=0;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(iSize*sizeof(int));
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter %d element",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
    iRet= Frequency(ptr,iSize);
	printf("Differece Between Frequency of even and odd numbers is %d\n",iRet);
	free(ptr);
	
	return 0;
}
