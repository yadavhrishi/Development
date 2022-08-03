#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

int CountSpaces(char Fname[])
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
			if(Data[i] == ' ')
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
	int iRet=0;
	
	printf("Enter the file name\n");
	scanf("%s",&Fname);
	
	iRet = CountSpaces(Fname);
	printf("Number of white spaces are : %d\n",iRet);
	
	return 0;
}