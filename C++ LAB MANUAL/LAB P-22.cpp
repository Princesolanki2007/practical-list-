#include<iostream>
using namespace std;
class Animal
{
	public:
		Animal()
		{
			cout<<"Class Animal (single):)"<<endl;
		}
};
class COW : public Animal
{
	public:
		COW()
		{
			cout<<"Class COW (single)"<<endl;	
		}	
};
class A
{
	public:
		void putdata1()
		{
			cout<<"Class A (multilevel)"<<endl;
		}
};
class B : public A 
{
		public :
		void putdata2()
		{
			cout<<"Class B (multilevel)"<<endl;
		}	
};
class C : public B
{
		public :
		void putdata3()
		{
			cout<<"Class C (multilevel)"<<endl;
		}
};
class D
{
	public:
	D()
	{
		cout<<"Class D (Multiple)"<<endl;
	}
};
class E
{
	public:
	E()
	{
		cout<<"Class E (Multiple)";
	}
};
class F : public D, public E{}; 
int main()
{
		COW co;
		C c;
		c.putdata1();
		c.putdata2();
		c.putdata3();	
		F f;
		return 0;
}





	
		

