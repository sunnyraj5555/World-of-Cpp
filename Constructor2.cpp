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

	Complex(int k)  //Parametrise constructor
	{ a=k;
		cout <<"a="<< a << endl;
	}
	
	Complex()  // Default Constructor
	{ a=0; b=0; 
		cout <<"a="<< a <<"b=" <<b <<endl;
	}

	Complex(Complex &c) //Copy Constructor
	{
		a=c.a;
		b=c.b;
		cout <<"a="<< a <<"b=" <<b <<endl;
	}
};

int main()
{
	Complex c1(3,4),c2(5),c3,c4(6,7); 
	Complex c8(c1);
	Complex c9=c4;
	
	return 0;
}
