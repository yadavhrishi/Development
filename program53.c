#include<stdio.h>

void Display(char ch)
{
	if((ch>='A')&&(ch<='Z'))
	{
		ch=ch+32;
		printf("Small case  of character is %c\n",ch);
	}
	else if((ch>='a')&&(ch<='z'))
	{
		ch=ch-32;
		printf("Capital case of character is %c\n",ch);
	}
	else
	{
		printf("%c",ch);
	}
	
}

int main()
{
	char cValue='\0';
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}