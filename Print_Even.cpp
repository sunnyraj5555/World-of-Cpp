//Program to Print n even numbers using loop

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "How many even Number you Want 'Enter': ";
	cin >> n;
	
	for(int i=1; i<=n; i++)
	cout << 2*i <<" " ;
	
	return 0;
}
