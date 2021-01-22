#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int b=20;
	int temp;

	temp = a;
	a = b;
	b = temp;

	cout << "a="<<a <<endl<<"b="<< b <<endl;

	int i=4;
	int j=5;

	j=i+j;
	i=j-i;
	j=j-i;

	cout <<"i=" <<i <<endl <<"j=" <<j;
	return 0;
}
