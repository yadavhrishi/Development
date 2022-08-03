#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char Fname[20];
	int fd =0;
	char Data[100];
	int iRet=0;
	
	printf("Enter the file name that you want to open\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR | O_APPEND);
	if(fd == -1)
	{
		printf("Unable to open file\n");
	}
	printf("file gets succesfully opened with fd: %d\n",fd);
	
	printf("Enter the data that you want to write\n");
	scanf(" %[^'\n']s",Data);
	
	iRet = read(fd,Data,strlen(Data));
	printf("%d bytes gets succesfully written\n",iRet);
	
	return 0;
}