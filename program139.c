#include<stdio.h>
#include<stdbool.h>

int main()
{
	int iRow=0,iCol=0,iRet=0,i=0,j=0,iCnt=0;
	bool iCheck;
	
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
		
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			if(i == j)
			{
				if(Arr[i][j] == 1)
				{
					iCheck = true;
				}
				else
				{
					iCheck = false;
					break;
				}
					
			}
			else
			{
				if(Arr[i][j] == 0)
				{
					iCheck = true;
				}
				else
				{
					iCheck = false;
					break;
				}
			}
			
		}
	}
	
	if(iCheck == true)
	{
		printf("Matrix is identity matrix\n");
	}
	else
	{
		printf("Matrix is not identity matrix\n");
	}
		
	return 0;
}