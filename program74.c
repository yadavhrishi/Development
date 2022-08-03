#include<stdio.h>

void StrCpyX(char *str,char*dest)
{
	while(*str != '\0')
	{
		*dest = *str;
		str++;
		dest++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[20];
	char Brr[20];
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",Arr);
	
	StrCpyX(Arr,Brr);
	printf("%s",Brr);
	
	return 0;
}