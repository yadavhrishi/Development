#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char Fname[20];
	char Data[100];
	int iRet =0;
	int fd =0;
	
	printf("Enter the file name that you want to read\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to opne the file\n");
	}
	printf("File gets succesfully opened with fd: \n",fd);
	
	iRet = read(fd,Data,10);
	printf("%d bytes get succefully read from the file\n",iRet);
	
	printf("Data from file is:\n");
	write(1,Data,iRet);
	
	return 0;
}