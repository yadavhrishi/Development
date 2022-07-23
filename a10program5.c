#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
	int iCnt=0;
	int iMult=1;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2 !=0)
		{
			iMult=iMult*Arr[iCnt];
		}
	}
	
	return iMult;
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
		printf("Enter element %d :",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
    iRet= Product(ptr,iSize);
	printf("%d is the product of all odd numbers\n",iRet);
	
	free(ptr);
	
	return 0;
}
