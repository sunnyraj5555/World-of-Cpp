//Program to Print n odd numbers using loop

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout <<"How many Odd Number you Want 'Enter': ";
	cin >> n;  
	
	int i, num=2;
	for(i=1; i<=n; i++)
	{
		if(i==num)
		{
			num=num+2;
			continue;   
		}
		cout <<i <<" "; 
	}
	
	return 0;
}
