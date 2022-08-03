#include<stdio.h>
#include<stdbool.h>

bool ChkSpl(char ch)
{
	if((ch==33)||(ch==64)||(ch==35)||(ch==36)||(ch==37)||(ch==94)||(ch==38)||(ch==42))
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
	char cValue='\0';
	bool bRet;
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	bRet=ChkSpl(cValue);
	if(bRet==true)
	{
		printf("Entered character is special character\n");
	}
	else
	{
		printf("Entered character is not special character\n");
	}

	return 0;
}