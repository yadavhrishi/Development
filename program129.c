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
	
	fd = open(Fname,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file\n");
	}
	printf("file gets succesfully opened with fd: %d\n",fd);
	
	iRet = read(fd,Data,10);
	printf("size of file is :%d bytes\n",iRet);
	
	return 0;
}