#include<stdio.h>

int main()
{
	int iRow=0,iCol=0,iRet=0,i=0,j=0,temp=0;
	
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
		
	for(i=0;i<iRow;i+=2)
	{
		for(j=0;j<iCol;j++)
		{
			temp = Arr[i][j];
			Arr[i][j] = Arr[i+1][j];
			Arr[i+1][j] = temp;
		}
	}
	
	printf("Elements of modified array are \n");
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			printf("%d\t",Arr[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}