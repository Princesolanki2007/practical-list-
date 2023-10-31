#include<iostream>
using namespace std;
class box
{
	private :
		static int length;
		static int bredth;
		
	public:
		static void print()
		{
			cout<<"Length ::"<<length<<endl;
			cout<<"Bredth ::"<<bredth<<endl;
		}
		
		
};
int box :: length=20;
int box :: bredth=40;
int main()
{
	box b;
		cout<<"Prince Solnki"<<endl;
	cout<<"220130318032"<<endl;
	cout<<"Using Object ::"<<endl;
	b.print();
	cout<<"Using Class Name ::"<<endl;
	box::print();
	
	return 0;
}
