#include<iostream>
using namespace std;
int main()
{
	int a,b,opr;
	
	cout<<"\nOpreator 1 = Addition";
	cout<<"\nOpreator 2 = Substraction";
	cout<<"\nOpreator 3 = Multiplication";
	cout<<"\nOpreator 4 = Division";
	cout<<"\nOpreator 5 = Modulo\n";
	cout<<"\nEnter A ::";
	cin>>a;
	cout<<"Enter B ::";
	cin>>b;
	cout<<"Enter Operator ::";
	cin>>opr;
	
	
	switch(opr)
	{
		case 1:
			cout<<"\nAddition";
			cout<<"\nA + B = ANS";
			cout<<"\nSum = "<<a+b;
		break;
		
		case 2:
			cout<<"Substracttion";
			cout<<"\nA - B = ANS";
			cout<<"\nSubstraction = "<<a-b;
		break;
		
		case 3:
			cout<<"Multiplication";
			cout<<"\nA x B = ANS";
			cout<<"\nMultiplication = "<<a*b;
		break;
		
		case 4:
			cout<<"Division";
			cout<<"\nA / B = ANS";
			cout<<"\nDivision = "<<a/b;
		break;
		
		case 5:
			cout<<"Modulo";
			cout<<"\nA % B = ANS";
			cout<<"\nModulo = "<<a%b;
		break;
		
		default:
			cout<<"Invalid";
		
		break;
		
	}
	
	cout<<endl;
	
	return 0;
}
