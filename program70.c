#include<stdio.h>

int Freq(char *str,char ch)
{
	int freq = 0;
	
	while(*str !='\0')
	{
		if(*str == ch)
		{
			freq++;
		}
		str++;
	}
	return freq;
}

int main()
{
	char Arr[20];
	int iret =0;
	char cValue;
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",&Arr);
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	iret = Freq(Arr,cValue);
	printf("Frequency is: %d",iret);
	
	return 0;
}