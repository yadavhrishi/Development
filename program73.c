#include<stdio.h>

int CountLength(char *str)
{
	int iCnt = 0; 
	while(*str !='\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
}

int CountLast(char *str,char ch)
{
	int iCnt=0;
	int iLength =0;
	iLength = CountLength(str);
	int i=0;
	for(i=iLength;i>0;i--)
	{
		if(*str == ch)
		{
			return i;
		}
	}
}

int main()
{
	char Arr[20];
	int iRet=0;
	char cValue = '\0';
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",&Arr);
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	iRet=CountLast(Arr,cValue);
	printf("Last Occured At %d\n",iRet);
	
	return 0;
}