#include<iostream>
using namespace std;
//Declaration of function
float area(int); //for area of circle
int area(int,int); //for area of rectangle

int main()
{
	int r;
	cout << "Enter radius of Circle: ";
	cin >> r;
	cout <<"Area of Circle is ="<< area(r)<< endl;

	int l,b;
	cout << "Enter the Length and breadth of Rectangle: ";
	cin >> l >> b;
	cout <<"Area of Rectangle =" <<area(l,b)<<endl;
	return 0;
}

float area(int r)
{
	return (3.14*r*r);
}

int area(int l, int b)
{
	return (l*b);
}
