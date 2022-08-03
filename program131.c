#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

void Display(char Fname[],int iSize)
{
	int i=0,iCnt=0,iRet=0,fd=0;
	char Data[FILESIZE];
	
	fd = open(Fname,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return ;
	}
	
	while((iRet = read(fd,Data,sizeof(Data))) !=0 )
	{
		printf("Data from file is :\n");
		for(i=0;i<iSize;i++)
		{
			printf("%c",Data[i]);
		}
	}
	

}

int main()
{
	char Fname[20];
	int iValue='\0';
	int iRet=0;
	
	printf("Enter the file name\n");
	scanf("%s",&Fname);
	
	printf("Enter the value\n");
	scanf("%d",&iValue);
	
	Display(Fname,iValue);
	
	return 0;
}