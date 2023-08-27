#include<iostream>
using namespace std;
int print(int &p,int &q);
int main()
{
	int p,q;
	cout<<"Prince Solanki"<<endl;
	cout<<"220130318032"<<endl; 
	cout<<"Enter The Number P::";
	cin>>p;
	cout<<"Enter The Number Q::";
	cin>>q;
	
	print(p,q);
	return 0;
}
int print(int &p,int &q)
{
	cout<<"The Number's Multiplication is ::"<<p*q;
}

