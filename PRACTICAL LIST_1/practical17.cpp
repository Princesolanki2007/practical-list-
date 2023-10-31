#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,c,i,n;
	cout<<"Prince Solanki "<<endl;
	cout<<"220130318032"<<endl;
	cout<<"Enter The Number ::";
	cin>>n;
	/*cout<<"Enter The Number ::";
	cin>>b;*/
	
	cout<<a<<" "<<b<<" ";
	
	for(i=2;i<n;i++)
	{
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
	
	return 0;
	
}
