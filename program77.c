#include<stdio.h>

void StrCpySmall(char *str,char*dest)
{
	while(*str != '\0')
	{
		if((*str>='a')&&(*str<='z'))
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
	
	StrCpySmall(Arr,Brr);
	
	printf("%s",Brr);
	
	return 0;
}