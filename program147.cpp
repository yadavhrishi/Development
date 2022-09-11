#include<iostream>

using namespace std;

class StringDemo
{
	public:
	
	int CountSmall(string str)
	{
		int iCnt=0,i=0;
		
		while(str[i] != '\0')
		{
			if((str[i] >= 97)&&(str[i]<= 122))
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
	iRet = sobj.CountSmall(str);
	cout<<"Number of small characters are "<<iRet<<endl;
	
	return 0;
}