#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0;
	int j=0;
	char ch='\0';
	char ch1='\0';
	
	for(i=1;i<=iRow;i++)
	{
		if(i%2!=0)
		{
			for(j=1,ch='A';j<=iCol;j++,ch++)
			{
				printf("%c\t",ch);
			}
			printf("\n");
		}
		else
		{
			for(j=1,ch1='a';j<=iCol;j++,ch1++)
			{
				printf("%c\t",ch1);
			}
			printf("\n");
		}	
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