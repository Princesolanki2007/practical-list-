//palindrome
#include<iostream>
using namespace std;
int pal(int);
int main() 
{
  	int n;
  	cout<<"Prince Solanki "<<endl;
	cout<<"220130318032"<<endl;
    cout<<"Enter an integer: ";
    cin>>n;
   	
	pal(n);
   	return 0;
}
int pal(int n)
{
	int rev=0,r,temp;
	temp=n;
	
	 while (n != 0) 
	 {
	    r=n%10;
        rev=rev*10+r;
        n/=10;
    }
	
	if (temp==rev)
        cout<<temp<<" is a palindrome.";
    else
        cout<<temp<<" is not a palindrome.";
}
