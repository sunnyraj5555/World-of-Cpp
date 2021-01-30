#include<iostream>
using namespace std;
int main()
{
	char ch1,ch2;
	cin >> ch1; 
	cin >> ch2;
	
	if (int(ch1)==82 || int(ch2)==82 )
	{
		cout<<"R"<<endl;
	}
	else if (int(ch1)==74 || int(ch2)==74 )
	{
	    if(int(ch1)==74)
		cout<<ch2<<endl;
		else
		cout<<ch1<<endl;
	}
	else 
	{
		cout<<"D"<<endl;
	}
	return 0;
}	

