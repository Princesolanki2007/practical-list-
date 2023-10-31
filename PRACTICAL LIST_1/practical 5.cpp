#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Prince Solanki "<<endl;
	cout<<"220130318032"<<endl;
	cout<<"Enter A ::";
	cin>>a;
	cout<<"Enter B ::";
	cin>>b;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"\nSwap number -->";
	cout<<"\nNumber A is ::"<<a;
	cout<<"\nNumber B is ::"<<b;
	
	return 0;
}
