  #include <iostream>
using namespace std;
class LargestFinder 
{
	private:
    int a,b,c;

    void inputNumbers() {
        cout << "Enter first number : ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << "Enter third number: ";
        cin >> c;
        
    }

    int findLargest() {
   	if(a>c && a>b)
   	{
   		return a;
	   }
	   else
	   {
	   		if(b>c)
	   		{
	   			return b;
			}
			else
		 	{
			   	return c;
		    }
	   }
   }
	public:
    void findAndDisplayLargest() {
        inputNumbers();
        int largest = findLargest();
        cout << "The largest number is: " << largest << endl;
    }
};

int main() {
    LargestFinder finder;
    finder.findAndDisplayLargest();

    return 0;
}
