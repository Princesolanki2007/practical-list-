#include<iostream>  
using namespace std;    
int mul(int &x, int &y)  
{  
	return x * y;
}  

int cval(int data)  
{  
	return 5; 
}

int main()   
{    
 int x=500, y=1,data;    
 int res= mul(x,y); 
 cout<<"Multiplication of x and y is ::"<<res<<endl;  

	int res1 = cval(data);
 cout << "Value of the data is: " <<res1<< endl; 
 return 0;  
} 


  



