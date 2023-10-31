
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float p,t,r,ci;
	cout<<"Prince Solanki "<<endl;
	cout<<"220130318032"<<endl;
	cout<<"Enter Principle Amount ::";
	cin>>p;
	cout<<"Enter Rate of Interest ::";
	cin>>r;
	cout<<"Enter Time (In Terms of years) ::";
	cin>>t;
	
	
	ci = p * pow((1 + r / 100), t);
	
	cout<<"The Compound Interest is ::"<<ci<<" RS.";
	
	return 0;
}
