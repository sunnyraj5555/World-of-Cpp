// Swaping of two numbers with and without third variable
#include<iostream>
using namespace std;

class Swap
{
public:
	int a,b,i,j;

	SwapM1(int a, int b)
	{
	int temp;

	temp = a;
	a = b;
	b = temp;

	cout << "a="<<a <<endl<<"b="<< b <<endl;

	}

	SwapM2(int i, int j)
	{

	j=i+j;
	i=j-i;
	j=j-i;

	cout <<"i=" <<i <<endl <<"j=" <<j;
	}

};

int main()
{


}
