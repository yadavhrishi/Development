#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%3)==0 && (Arr[iCnt]%5)==0 )
		{
			printf("%d is divisible by 3 and 5\n",Arr[iCnt]);
		}
	}
}

int main()
{
	int iCnt=0;
	int iSize=0;
	int *ptr=NULL;
	
	printf("Enter number of elements\n");
	scanf("%d",&iSize);
	
	ptr =(int*)malloc(iSize*sizeof(int));
	
	printf("enter the elements\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter element %d: ",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	Display(ptr,iSize);
	
	free(ptr);
	return 0;
}