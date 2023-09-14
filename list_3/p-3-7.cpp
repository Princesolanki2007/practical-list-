#include<iostream>
using namespace std;
class employee
{
	private:
		string name;
		int em_no;
	public:
		void get_data()
		{
			cout<<"Enter Employee Name ::";
			getline(cin,name);
			cout<<"Enter The Employye Number ::";
			cin>>em_no;
		}
		
		void put_data()
		{
			cout<<"Employee Name is ::"<<name<<endl;
			cout<<"Employee Number is ::"<< em_no<<endl;
			
		}
};
int main()
{
	cout<<"Prince Solnki"<<endl;
	cout<<"220130318032"<<endl;
	cout<<"-------------"<<endl;
	employee e;
	e.get_data();
	e.put_data();
	
	return 0;
}
