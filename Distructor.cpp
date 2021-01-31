//Introduction to Destrctor

#include<iostream>
using namespace std;

class Complex
{
	private:
		int a,b;
	public:
		~Complex()
	   { cout <<"Destructor";} //cout to see weather destructor is called or not?
	   
};

void fun()
{
	Complex obj; //Object of Complex class
}

int main()
{
	fun(); //when the fun() function is called and before it will end the destructor will be called automatically
}
