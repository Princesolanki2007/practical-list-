#include<iostream>
using namespace std;
int print(int &p);
int main()
{
	int p;
	cout<<"Prince Solanki"<<endl;
	cout<<"220130318032"<<endl; 
	cout<<"Enter The Number ::";
	cin>>p;
	
	print(p);
	return 0;
}
int print(int &p)
{
	cout<<"The Number is ::"<<p;
}
