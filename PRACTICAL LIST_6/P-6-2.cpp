#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	cout<<"Prince Solanki "<<endl;
	cout<<"220130318032"<<endl;
	string srg;
	ifstream filestream("test.txt");
	if(filestream.is_open())
	{
		while(getline(filestream,srg))
		{
			cout<<srg<<endl;
		}
		filestream.close();
	}
	else
	{
		cout<<"File opening is fail"<<endl;
	}
	return 0;
}
