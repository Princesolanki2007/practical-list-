#include <iostream>
using namespace std;
class MyClass 
{
	public:
    static int x; 
};

int MyClass::x=20; 
int main() 
{
    int x=5; 
    
    
    cout << "Local variable x: "<<x<<endl;
    cout << "Static member variable x: "<<MyClass::x<<endl;
    
    return 0;
}
