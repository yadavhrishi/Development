#include<stdio.h>

int main()
{
	int iRow=0,iCol=0,iRet=0,i=0,j=0,iSum=0,iMax=0,a=0,b=0;
	
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

	iMax = Arr[0][0];
	for(i=0;(i<iRow);i++)
	{
		for(j=0;(j<iCol);j++)
		{
			if(i == j)
			{
				if(iMax < Arr[i][j])
				{
					iMax = Arr[i][j];
				}
			}
		}
	}
	
	printf("Maximun from diagonal 1 %d\n",iMax);
	printf("Diagonal Elements are \n");
	for(i=0;i<iRow;i++)
	{
		for(j=iCol-1;j>=0;j--)
		{
			if(i == j)
			{
				printf("%d\t",Arr[i][j]);
			}
		}
	}
	
	printf("Maximum number from diagonals is : %d\n",iMax);
	
	return 0;
}