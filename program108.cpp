#include<iostream>
using namespace std;

template <class T>
T Multiply(T iNo1,T iNo2)
{
	T Ans;
	Ans = iNo1 + iNo2;
	return Ans;
}

int main()
{
	int iRet = Multiply(10,20);
	cout<<"Addition is :"<<iRet<<endl;
	
	float fRet = Multiply(10.4,20.3);
	cout<<"Adition is: "<<fRet<<endl;

	return 0;
}