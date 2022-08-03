#include<stdio.h>

void StrNCpyX(char *str,char*dest,int iCnt)
{
	while((*str != '\0')&&(iCnt !=0))
	{
		*dest = *str;
		str++;
		dest++;
		iCnt--;
	}
	*dest = '\0';
}

int main()
{
	char Arr[20];
	char Brr[20];
	int cpy =0;
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",Arr);
	
	printf("How many letters to copy\n");
	scanf("%d",&cpy);
	
	StrNCpyX(Arr,Brr,cpy);
	printf("%s",Brr);
	
	return 0;
}