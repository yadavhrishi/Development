#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

int CountCapital(char Fname[])
{
	int fd =0,i=0,iRet=0,iCnt=0;
	char Data[FILESIZE];
	
	fd = open(Fname,O_RDONLY);
	if(fd == -1)
	{
		printf("Unale to open the file\n");
		return -1;
	}
	
	while((iRet = read(fd,Data,sizeof(Data))) != 0)
	{
		for(i=0;i<iRet;i++)
		{
			if((Data[i]>='A')&&(Data[i]<='Z'))
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
	
	iRet = CountCapital(Fname);
	printf("Number of Capital characters are : %d\n",iRet);
	
	return 0;
}