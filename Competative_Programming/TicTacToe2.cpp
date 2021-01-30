#include<iostream>
using namespace std;
int main()
{
	char a,b;
	cin >> a; 
	cin >> b;
if(a=='R'||b=='R')
  cout<<"R";
  else if(a=='J')
  cout<<b;
  else if(b=='J')
  cout<<a;
  else
  cout<<"D";

return 0;
}
