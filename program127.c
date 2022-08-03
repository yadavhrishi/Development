#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char Fname[20];
	int fd = 0;
	
	printf("Enter the file name that you want to create\n");
	scanf("%s",Fname);
	
	fd = creat(Fname,0777);
	if(fd == -1)
	{
		printf("Unable to create file\n");
	}
	
	printf("File is succesfully opened with fd:",fd);
	
	return 0;
}