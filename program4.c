#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iNo1,int iNo2)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]>iNo1 && Arr[iCnt]<iNo2)
		{
			printf("%d\n",Arr[iCnt]);
		}
	}
}

int main()
{
	int iSize=0;
	int *ptr=NULL;
	int iCnt=0;
	int iValue1=0;
	int iValue2=0;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(iSize*sizeof(int));
	
	printf("Enter the starting point range\n");
	scanf("%d",&iValue1);
	
	printf("Enter the ending point of range\n");
	scanf("%d",&iValue2);
	
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter element: %d",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
    Range(ptr,iSize,iValue1,iValue2);
	
	free(ptr);
	
	return 0;
}
