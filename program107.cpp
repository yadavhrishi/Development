#include<iostream>
using namespace std;


template <class T>
T LargestNo(T No1,T No2,T No3)
{
	T iMax=No1;
	
	if(iMax<No2)
	{
		iMax = No2;
		if(iMax<No3)
		{
			iMax = No3;
		}
	}
	else if(iMax<No3)
	{
		iMax = No3;
	}
	
	return iMax;
	
}

int main()
{
	int iRet = LargestNo(10,54,68);
	cout<<"Largest number is"<<iRet<<endl;
	
	float fRet = LargestNo(20.4,56.3,34.7);
	cout<<"Largest number is"<<fRet<<endl;
	
	return 0;
}