//prime number
#include<iostream> 
using namespace std;
int prime(int);
int main() 
{
  	int n;
  	cout<<"Prince Solanki "<<endl;
	cout<<"220130318032"<<endl;
  	cout<<"Enter Number ::";
  	cin>>n;

  	prime(n);
  	return 0;    
}

int prime(int n)
{
	int count=0,i;
	for (i = 1; i <= n; i++) 
  	{
      if (n%i==0) {
         count++;
      }
  	}

  	if (count==2) {
        cout<<n<<" is a Prime number";
  	}
  	else {
         cout<<n<<" is not a Prime number";
  	}
}
