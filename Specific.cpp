#include<iostream>
using namespace std;

int Addition(int No1,int No2)
{
	int Ans=0;
	Ans=No1+No2;
	return Ans;
}

float Addition(float No1,float No2)
{
	float Ans=0;
	Ans=No1+No2;
	return Ans;
}

int main()
{
	int x=10;
	int y=11;
	int ret =0;
	ret = Addition(x,y);
	cout<<"Addition is: "<<ret<<"\n";
	
	float a=10.8;
	float b=11.5;
	float fret =0.0;
	ret = Addition(a,b);
	cout<<"Addition is: "<<ret<<"\n";
	
	return 0;
}