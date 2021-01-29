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
};
