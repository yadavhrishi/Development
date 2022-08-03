#include<stdio.h>

void StrCpyCap(char *str,char*dest)
{
	while(*str != '\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			*dest = *str;
			dest++;
		}
		str++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[20];
	char Brr[20];
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",Arr);
	
	StrCpyCap(Arr,Brr);
	
	printf("%s",Brr);
	
	return 0;
}