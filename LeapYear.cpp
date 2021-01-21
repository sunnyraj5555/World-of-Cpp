#include<iostream>
using namespace std;

int main()
{
	int year;
	cout << "Enter Year:" <<" ";
	cin >> year;
	
	bool y = LeapYear(year);
	
	if (y == true)
		cout << "leap Year";
	else
		cout <<"Not Leap Year";
	
	return 0;

}

bool LeapYear(int year)
{
	bool isLeapYear =false;
	
	if (year%4 == 0)  //for Year divisible by 4 is leap year
	{
		if(year%100 ==0)  // If century year then may or may not be leap year
		{
			if(year%400 == 0) // If century year is divisible by 400 it is leap year.
			{
				isLeapYear = true;  //true indicates its leap year
			}
		}
		else isLeapYear = true;
	}
	return isLeapYear;

}
