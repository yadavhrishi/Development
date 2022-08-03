#include<stdio.h>

int WhiteSpaces(char *str)
{	
	int iCnt=0;
	while(*str !='\0')
	{
		if(*str == ' ')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
	
}

int main()
{
	char Arr[20];
	int iret =0;
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",&Arr);
	
	iret = WhiteSpaces(Arr);
	printf("Number of white spaces are: %d\n",iret);
	
	return 0;
}