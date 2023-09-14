#include<iostream>
using namespace std;
class Distance
{
	private:
		float feet,inches;
	public:
		
		void get_data()
		{
			cout<<"Enter The Measure of Feet ::";
			cin>>feet;
			cout<<"Enter The Measure of Inches ::";
			cin>>inches;
		}
		
		void put_data()
		{
			cout<<"The Measurement of Feet With Inches are ::"<<feet<<" Feet "<<inches<<" Inches";
			
		}
};
int main()
{
	Distance m;
	m.get_data();
	m.put_data();
	
	return 0;
}
