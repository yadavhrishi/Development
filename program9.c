#include<stdio.h>
#include<stdlib.h>

void ThreeDig(int Arr[],int iLength)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]>99 && Arr[iCnt]<1000)
		{
			printf("%d is the three digit number\n",Arr[iCnt]);
		}	
	}	
}

int main()
{
	int iSize=0;
	int *ptr =NULL;
	int iCnt=0;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(iSize*sizeof(int));
	
	printf("Enter the elements\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter elements %d: \n",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	ThreeDig(ptr,iSize);
	
	free(ptr);
	
	return 0;
}