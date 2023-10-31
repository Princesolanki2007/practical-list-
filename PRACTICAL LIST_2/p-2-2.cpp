#include <iostream>
using namespace std;
class temp
{
    public:
        int a;
        static int b;
        void display()
        {
            cout << "a: " << a <<endl;
            cout << "b: " << b <<endl;
        }
};
int temp ::b=0;
int main()
{
    cout<<"Prince Solnki"<<endl;
	cout<<"220130318032"<<endl;
	cout<<"-------------"<<endl;
	temp t;
    t.display();
   
    return 0;
}

