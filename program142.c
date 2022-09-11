#include<stdio.h>

int main()
{
	int iRow=0,iCol=0,iRet=0,i=0,j=0,iSum=0,iFreq=0,iCnt=0;
	
	printf("Enter the number of rows\n");
	scanf("%d",&iRow);
	
	printf("Enter the number of cloumns\n");
	scanf("%d",&iCol);
	
	int Arr[iRow][iCol];
	
	printf("Enter the elements\n");
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			scanf("%d",&Arr[i][j]);
		}
	}
	
	printf("Elements of array are \n");
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			printf("%d\t",Arr[i][j]);
		}
		printf("\n");
	}

	printf("Enter the number to get frequency\n");
	scanf("%d",&iFreq);
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			if(Arr[i][j] == iFreq)
			{
				iCnt++;
			}
		}
	}
	
	printf("Frequency of %d is : %d\n",iFreq,iCnt);
	
	return 0;
}