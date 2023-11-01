#include<iostream>
#include<iomanip>
using namespace std;
class Student 
{
	private:
   	string id;
    float code;
   
    void inputOn()
    {
        cout << "Start of Input :)" << endl;
    }
    void inputOff()
    {
        cout << "End of Input :)" << endl;
    }

public:
  
    void read()
    {

        inputOn();
        cout << "Enter ID Name: ";
        cin >> id;
        cout << "Enter Code : ";
        cin >> code;
        
        inputOff();
    }
    void print()
    {
        cout << endl;
        cout << "ID Name: " << id << endl;
        cout << "Code NUMBER: " <<setfill('0')<<setw(10)<< code << endl;
    }
};


int main()
{
   
    Student std;
	std.read();
    std.print();

    return 0;
}

