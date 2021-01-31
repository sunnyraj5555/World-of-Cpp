// constructor calling and type of constructor , constructor overloading

#include<iostream>
using namespace std;

class Complex
{
	private:
		int a,b;
	public:
	Complex(int x, int y) //Parametrise constructor
	{  	a=x; 
		b=y;
		cout <<"a="<< a <<"b=" <<b <<endl;
	}


};
