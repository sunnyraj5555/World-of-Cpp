#include<iostream>
using namespace std;

struct book
{
	int bookid;
	char title[20];
	float price;

}:

void display(book);
book input();

          //Creating a function for output
void display(book b)
{
	cout <<b.bookid <<" "<< b.title <<" "<<b.price <<endl;
}
          //creating a function of book return type 
book input()
{
	book b;
	cout << "Enter bookid, title and price of book:" <<endl;
	cin >>b.bookid >>b.title >>b.price ;
	return(b);
}
