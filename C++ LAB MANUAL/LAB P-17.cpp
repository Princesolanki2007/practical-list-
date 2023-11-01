//WAP to compute volume of cube, cylinder & rectangular box using function overloading. 
#include<iostream>
# define PI 3.14
using namespace std;
class overload
{
	private :
		int a,h,r,l,w,h1;
		
	public :
		
		volume(int a)
		{
			cout<<"'Volume of Cube'  is 	         ::"<<a*a*a<<endl;
			cout<<"(A=3, Formula = a*a*a)"<<endl;
		}
		
		volume(int r,int h)
		{
			cout<<"'Volume of Cyclinder' is         ::"<<PI*r*r*h<<endl;
			cout<<"(r=3, h=4, Formula = PI*r*r*h) "<<endl;
		}
		
		volume(int l,int w,int h1)
		{
			cout<<"'Volume of Rectangular Box' is 	 ::"<<l*w*h1<<endl;
			cout<<"(L=4, W=4, H=4, Formula = L*W*H)"<<endl; 			     
		}
		
};
int main()
{
	overload a;
	a.volume(3);
	a.volume(3,4);
	a.volume(4,4,4);
	
	return 0;
}
