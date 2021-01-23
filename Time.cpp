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

void Time:: showTime()
	{
		cout<< HR <<":" <<MIN <<":" <<SEC <<endl;
	}

	void Time:: normalize()
	{
		MIN = MIN+(SEC/60);
		SEC = SEC%60;
		HR = HR+(MIN/60);
		MIN = MIN%60;
		cout <<HR <<":" <<MIN <<":" <<SEC;	
	}

