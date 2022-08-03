#include<iostream>
using namespace std;

int Difference(char str[])
{
	int icnt =0;
	int freq = 0;
	int iCnt =0;
	
	while(*str !='\0')
	{
		if((*str>=65)&&(*str<=90))
		{
			iCnt++;
		}
		else if((*str>=97)&&(*str<=122))
		{
			icnt++;
		}
	}
	freq = icnt - iCnt;
	return freq;
}

int main()
{
	char Arr[20];
	int iRet=0;
	
	cout<<"Enter the String"<<endl;
	cin>>Arr;
	
	iRet=Difference(Arr);
	cout<<"Difference is "<<iRet<<endl;
	
	return 0;
}
