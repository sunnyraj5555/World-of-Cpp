// Program to print Time, set time, normalise

#include<iostream>
using namespace std;

class Time
{
	
private:
	int HR,MIN,SEC;
public:
	void setTime(int, int, int);
	void showTime();
	void normalize();
};

void Time:: setTime(int x, int y,int z)
	{
		HR=x; MIN=y; SEC=z;
	}