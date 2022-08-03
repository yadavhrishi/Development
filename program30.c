#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0;
	int j=0;
	int temp=0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1,temp=i;j<=iCol;j++,temp++)
		{
			printf("%d\t",temp);
		}
		printf("\n");
	}	
}

int main()
{
	int iValue1=0;
	int iValue2=0;
	
	printf("Enter the number of Rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter the number of Columns\n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}