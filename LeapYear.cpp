#include<iostream>
using namespace std;

int main()
{


}

bool LeapYear(int year)
{
	bool isLeapYear =false;
	
	if (year%4 == 0)
	{
		if(year%100 ==0)
		{
			if(year%400 == 0)
			{
				isLeapYear = true;
			}
		}
		else isLeapYear = true;
	}
	return isLeapYear;

}
