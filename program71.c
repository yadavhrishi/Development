#include<stdio.h>

int FirstChar(char *str,char ch)
{
	int iCnt =0;
	while(*str != ch)
	{
		iCnt++;A
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	char cValue ='r';
	int iRet =0;
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",&Arr);
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	iRet = FirstChar(Arr,cValue);
	printf("First character occured at: %d",iRet);
	
	return 0;
}