#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
	int iDigit=0;
	if(iNo<0)
	{
		iNo= -iNo;
	}
	
	while(iNo!=0)
	{
		iDigit = iNo%10;
		iNo = iNo/10;
	    if(iDigit ==0)
        {
            break;
			return true;
		}
	    	
    }
	
	
	
	
}

int main()
{
	int iValue=0;
	bool bRet=false;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	bRet= CheckZero(iValue);
	if(bRet == true)
	{
		printf("It conatins Zero\n");
	}
	else
	{
		printf("There is no zero\n");
	}
	
	return 0;
}