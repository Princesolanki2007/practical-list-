#include<iostream>
using namespace std;
class area
{

	private:
		int l,b;
		double c;
		int a;
	public:
		void Area(int l,int b)
		{
			cout<<"The Area Of Rectanle is ::"<<l*b<<endl;
		}
		void Area(double c)
		{
			cout<<"The Value Of A is ::"<<c<<endl;
		}
		void Area(int a)
		{
			cout<<"The Integer Value Of A Is ::"<<a<<endl;
		}
};
int main()
{
	area a;
	cout<<"Prince Solnki"<<endl;
	cout<<"220130318032"<<endl;
	a.Area(2,3);
	a.Area(4.5);
	a.Area(20);
	
	return 0;
}
