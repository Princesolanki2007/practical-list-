#include<iostream>
#include<iomanip>
using namespace std;
class temp
{
	private:
		float f,c;
	public:
		void getdata()
		{
			cout<<"Enter Ferenhiet ::";
			cin>>f;
		}
		
		void putdata()
		{
			c = (f-32)*5/9;	
			cout<<"The Celcius Temprature is ::"<<setprecision(4)<<c;
		}
};

int main()
{
	cout<<"Prince Solanki "<<endl;
	cout<<"220130318032"<<endl;
	temp t;
	t.getdata();
	t.putdata();
}
/*

#include<iostream>
using namespace std;
class temprature
{
	private:
		
		float f,c;
		
	public:
		
		void getdata()
		{
			cout<<"Enter Ferenheit ::";
			cin>>f;
		}
		
		void putdata()
		{
			c = (f-32)*5/9;	
			cout<<"The Celcius Temprature is ::"<<c;
		}
		
		
};

int main()
{
	temprature t;
	t.getdata();
	t.putdata();
}*/
