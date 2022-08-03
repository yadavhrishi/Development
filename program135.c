#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

int CountChar(char Fname[],char cValue)
{
	int i=0,iCnt=0,iRet=0,fd=0;
	char Data[FILESIZE];
	
	fd = open(Fname,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	while((iRet = read(fd,Data,sizeof(Data))) !=0 )
	{
		for(i=0;i<iRet;i++)
		{
			if(Data[i] == cValue)
			{
				iCnt++;
			}
		}
	}
	
	return iCnt;
}

int main()
{
	char Fname[20];
	char cValue='\0';
	int iRet=0;
	
	printf("Enter the file name\n");
	scanf("%s",&Fname);
	
	printf("ENter the character\n");
	scanf(" %c",&cValue);
	
	iRet = CountChar(Fname,cValue);
	printf("frequency is : %d\n",iRet);
	
	return 0;
}