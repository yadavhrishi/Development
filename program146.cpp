#include<iostream>

using namespace std;

class StringDemo
{
	public:
	
	int CountCapital(string str)
	{
		int iCnt=0,i=0;
		
		while(str[i] != '\0')
		{
			if((str[i] >= 65)&&(str[i]<=90))
			{
				iCnt++;
			}
			i++;
		}
		
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
	iRet = sobj.CountCapital(str);
	cout<<"Number of capital characters are "<<iRet<<endl;
	
	return 0;
}