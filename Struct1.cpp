//Program Showing the different methods to use a structure data type
#include<iostream>

using namespace std;

struct book
{
	int bookid;
	char title[20];
	float price;
}b1;   //Method 1

void display(book);
book input();

int main()
{
	book b2 = {100,"hacked Education", 400.0}; //Method 2

	book b3;   //Method 3
	b3.bookid = 100;
	b3.price = 300.0;

	book b4;  //Method 4
	b4.input();

}

book input()
{
	book b;
	cout << "Enter bookid, title and price of book:" <<endl;
	cin >>b.bookid >>b.title >>b.price ;
	return(b);
}

void display(book b)
{
	cout <<b.bookid <<" "<< b.title <<" "<<b.price <<endl;
}
