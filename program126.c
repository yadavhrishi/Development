#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char Fname[20];
	int fd =0;
	
	printf("Enter the file name that to open\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file\n");
	}	

	printf("File is succesfuly opened with Fd: %d\n",fd);
	
	return 0;
}