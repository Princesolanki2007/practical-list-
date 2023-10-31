#include<iostream>
using namespace std;
class A
{
	public:
		void putdata1()
		{
			cout<<"Class A"<<endl;
		}
};
class B : public A 
{
		public :
		void putdata2()
		{
			cout<<"Class B"<<endl;
		}	
};
class C : public B
{
		public :
		void putdata3()
		{
			cout<<"Class C"<<endl;
		}
};
int main()
{
				cout<<"Prince Solanki "<<endl;
		cout<<"220130318032"<<endl;
		cout<<"---------------"<<endl;

		C c;
		c.putdata1();
		c.putdata2();
		c.putdata3();
		
		return 0;
}
