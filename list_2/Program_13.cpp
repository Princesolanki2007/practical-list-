#include<iostream>
using namespace std;
#define PI 3.14
float area(float r, float PI);
int main()
{
	float r,res=0;
	cout<<"Prince Solanki"<<endl;
	cout<<"220130318032"<<endl;
	cout<<"Enter The Radius Of The Circle ::";
	cin>>r;
	
	res=area(r,PI);
	cout<<"The Area Of Circle is :: "<<"CM"<<res;
	return 0;
}
float area(float r,float PI)
{
	float a;
	a=PI*r*r;
	return a;
}
