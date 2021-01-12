#include <iostream>
using namespace std;

int main()
{
		
	// Print all Patterns using DOG Method
	
	int n;  //Created variable n for User
	cin>>n;
	
	for (int i=1; i<=n; i++){
		
		for (int j=1; j<=n; j++){
			
			if (j<=i)
				cout <<"*";y
			else
				cout <<" ";
		}
		cout <<endl;		
	}
	
	return 0;
	
}
