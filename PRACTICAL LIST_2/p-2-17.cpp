#include <iostream>
using namespace std;
class area{
private:
    double r;
    int l,b;
    int s;
public:
    void Area (double r)
    {
        cout <<"Area of Circle is ::"<<3.14*r*r<<endl;
    }
    void Area (int s)
    {
        cout <<"Perimeter of Square is ::"<<4*s<<endl;
    }
    void Area (int l,int b)
    {
        cout <<"Area of Rectangle is ::"<<l*b<<endl;
    }
};
int main()
{
    area a;
    cout<<"Prince Solnki"<<endl;
	cout<<"220130318032"<<endl;
    a.Area(2,4);
    a.Area(4);
    a.Area(6.0);
}

