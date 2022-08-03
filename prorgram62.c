#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char *str)
{
	int i =0;
	while(*str !='\0')
	{
		{
			i = 1;
		}
		str++;
	}
	if(i==1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char Arr[20];
	bool bret ;
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",&Arr);
	
	bret = CheckVowel(Arr);
	if(bret == true)
	{
		printf("Contains Vowel\n");
	}
	else
	{
		printf("Does not Contain vowel\n");
	}
	
	return 0;
}