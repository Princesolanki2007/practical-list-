#include<iostream>
using namespace std;
int arm(int);
int main()    
{    
	int n;
	    
	cout<<"Enter The Number ::";    
	cin>>n; 
	   
	arm(n);
	return 0;  
}   

int arm(int n) 
{
	int r,s=0,temp;
	
	temp=n;    
	while(n>0)    
	{    
	r=n%10;    
	s=s+(r*r*r);    
	n=n/10;    
	}    

	if(temp==s){
		cout<<"Armstrong  Number ";    
	}
	else{   
		cout<<"Not Armstrong Number";    
	}
}
