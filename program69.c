#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char *str,char chk)
{
	while(*str != '\0')
	{
		if(*str == chk)
		{
			return true;
		}
		str++;
	}
}

int main()
{
	char Arr[20];
	bool bret = false ;
	char cValue ;
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",&Arr);
	
	printf("Enter the character\n");
	scanf("%C",&cValue);
	
	bret = CheckChar(Arr,cValue);
	if(bret == true)
	{
		printf("characteer is in string\n");
	}
	else
	{
		printf("there is no such character\n");
	}
	
	return 0;
}