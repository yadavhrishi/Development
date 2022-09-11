#include<iostream>
#include<string>

using namespace std;

class StringDemo
{
	public:
	
	int CountDiff(string str)
	{
		int iCnt1=0,iCnt2=0,i=0;
		
		while(str[i] != '\0')
		{
			if((str[i] >= 65)&&(str[i] <= 90))
			{
				iCnt1++;
			}
			else if((str[i] >= 97)&&(str[i] <=122))
			{
				iCnt2++;
			}
			i++;
		}
		
		int iCnt = iCnt2 - iCnt1;
		return iCnt;
	}
};

int main()
{
	string str;
	int iRet=0; 
	
	cout<<"Enter the string"<<endl;
	getline(cin,str);
	
	StringDemo sobj;
	
	iRet = sobj.CountDiff(str);
	cout<<"Difference between frequency of small and big characters is:"<<iRet<<endl;
	
	return 0;
}