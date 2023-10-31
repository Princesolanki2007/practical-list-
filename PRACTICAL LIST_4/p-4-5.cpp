#include<iostream>
using namespace std;
class A
{
	public :
		int n=100;
		char ch='A';
		
	void disp(A a)
	{
		cout<<"N is ::"<<a.n<<endl;
		cout<<"CH is ::"<<a.ch<<endl;
	}
};
int main()
{
		cout<<"Prince Solnki"<<endl;
	cout<<"220130318032"<<endl;
	A obj;
	obj.disp(obj);
	
	return 0;
}

