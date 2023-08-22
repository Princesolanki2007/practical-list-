#include<iostream>
using namespace std;
inline int cube(int r) 
{
	return r*r*r;
}
int main() 
{
	int r;
	cout<<"Prince Solanki"<<endl;
	cout<<"220130318032"<<endl;
	cout<<"Enter Value To Find Cube:"<<endl;
	cin>>r;

	cout<<"Cube of The Number: "<<cube(r);

	return 0;
}
