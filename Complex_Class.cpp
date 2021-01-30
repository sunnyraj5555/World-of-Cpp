#include<iostream>
using namespace std;

class complex
{
 private:
  int a,b;
 public:
  void set_data(int x, int y)
  {
    a=x; b=y;
  }

  void show_data()
  {
    cout << "a=" <<a <<"b="<<b;
  }
	
complex add(complex c)
  {
  	complex temp;
  	temp.a=a+c.a;
  	temp.b=b+c.b;
  	return(temp);
  }
	
};

int main()
{
	complex c1;
	c1.set_data(4,5);
	c1.show_data();
	cout <<endl;
	
	c2.set_data(5,3);
	c2.show_data();
	cout <<endl;
	
        c3=c1.add(c2);
	c3.show_data();

	return 0;
}
