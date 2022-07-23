#include<stdio.h>
#include<stdbool.h>

//'char a','char e','char i','char o','char u';

char vowel = 'a,e,i,o,u';

bool ChkVowel(char ch)
{
	if(ch == "vowel")
	{
		return true;
	}
	else
	{
		return  false;
	}	
}

int main()
{
	
	char cValue = '\0';
	bool bRet = false;
	
	printf("Enter Character\n");
	scanf("%c",&cValue);
	
	bRet = ChkVowel(cValue);
	
	if(bRet == true)
	{
		printf("%c is Vowel",cValue);
	}
	if(bRet == false)
	{
		printf("%c is not Vowel",cValue);
	}
	
	return 0;
}