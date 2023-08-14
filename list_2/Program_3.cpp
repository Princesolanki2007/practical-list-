#include<iostream>
using namespace std;
class temp
{
	public:
		// using class with scope resolution 
		void display();
};
void temp::display()
{
	cout<<"I am Prince Solanki"<<endl;
	cout<<"En_no    220130318032 "<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Hello World "<<endl;
}
int main()
{
	temp t;
	t.display();

	return 0;
}

