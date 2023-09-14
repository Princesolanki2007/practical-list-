#include<iostream>
using namespace std;
class student
{
	private:
		string name;
		int age;
	public:
		
		void get_data()
		{
			cout<<"Enter The Name of Student ::";
			cin>>name;
			cout<<"Enter The Age of Student ::";
			cin>>age;
		}
		
		void put_data()
		{
			cout<<"The Name of Student is ::"<<name<<endl;
			cout<<"The Age of Student is ::"<<age<<endl;
		}
};
int main()
{
	student s;
	s.get_data();
	s.put_data();
	
	return 0;
}
