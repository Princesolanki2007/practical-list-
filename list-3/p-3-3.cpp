#include<iostream>
using namespace std;
struct employee
{
	string name,branch;
	int code;
	int salary;
}e1; 
int main()
{
	cout<<"Prince Solanki"<<endl;
	cout<<"220130318032"<<endl;
	cout<<"-------------"<<endl;
	cout<<"Enter The Name Of The Employee ::";
	getline(cin,e1.name);
	cout<<"Enter The Code Of The Employee ::";
	cin>>e1.code;
	cout<<"Enter The Salary of The Employee ::";
	cin>>e1.salary;	
	cin.ignore();//with the use of ignore function
	cout<<"Enter The Branch of The Employee ::";
	getline(cin,e1.branch);
	
	cout<<endl<<"The Name of The Employee is ::"<<e1.name<<endl;
	cout<<"The Code of The Employee is ::"<<e1.code<<endl;
	cout<<"The Salary of The Employee is ::"<<e1.salary<<endl;
	cout<<"The Branch of The Employee is ::"<<e1.branch<<endl;
	
	return 0;
	
}
