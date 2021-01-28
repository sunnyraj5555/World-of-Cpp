#include<iostream>

using namespace std;

struct book
{
	private:
		int bookid;
		char title[20];
		float price;

	public:				// Variables + Functions
	void input()
	{
		cout << "Enter bookid, title and price of book:" <<endl;
		cin >>bookid >>title >>price ;
		if(bookid<0)
		bookid =-bookid;
	}

	void display()
	{
		cout <<bookid <<" "<< title <<" "<<price <<endl;
	}

};


int main()
{
	book b1;
	b1.input();
	b1.display();
	//b1.bookid=-100;
	//it cant be accessed now coz bookid is private
	return 0;


}
