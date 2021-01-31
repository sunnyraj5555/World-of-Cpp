// Introduction to constructor

#include<iostream>
using namespace std;

class Complex
{
	private:
		int a,b;
	public:
	Complex() //Same name as class with no return type
	{ cout << "Hello Constructor!"<<endl;	}
};
int main()
{
	Complex c1,c2,c3; 
	
	return 0;
}
