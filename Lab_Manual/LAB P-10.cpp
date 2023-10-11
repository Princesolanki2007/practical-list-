#include<iostream>
using namespace std;
class student
{
	private :
		int rn;
		string name;
		
	public:
		
		void getdata()
		{
			cout<<"Enter Name ::";
			cin>>name;
			cout<<"Enter Roll Number ::";
			cin>>rn;
		}
		
		void putdata()
		{
			cout<<"Name 	    ::"<<name<<endl;
			cout<<"Roll Number ::"<<rn<<endl;
			
		}
};
int main()
{
	student a[10];
	int n,i;
	cout<<"Enter Size of Array ::";
	cin>>n;
	
	cout<<"Enter Details  :)"<<endl;
	for(i=0;i<n;i++)
	{
		a[i].getdata();
	}
	
	cout<<endl<<"Details Are :)"<<endl;
	for(i=0;i<n;i++)
	{
		a[i].putdata();
	}
	
	return 0;

}
