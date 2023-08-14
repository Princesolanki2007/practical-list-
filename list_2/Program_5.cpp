#include<iostream>
#include<iomanip>
using namespace std; 
int main()
{
	// function setfill 
	int a =10;
	cout<<"I am Prince Solanki   "<<endl;
	cout<<"En_no    220130318032 "<<endl;
	cout<<"--------------------- "<<endl;
	cout<<"The value of A :   "<<setw(5)<<setfill('*')<<a;
	return 0;
}
