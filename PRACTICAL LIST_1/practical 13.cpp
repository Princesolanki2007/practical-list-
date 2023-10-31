#include<iostream>
using namespace std;
int sum(int);
int main()
{
	int n;
	cout<<"Prince Solanki "<<endl;
	cout<<"220130318032"<<endl;
	cout<<"Enter number ::";
	cin>>n;
	
	sum(n);
	
	return 0;
}
int sum(int n)
{
	int i,s=0;
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	
	cout<<"Sum 1 to N is ::"<<s;
	
}
