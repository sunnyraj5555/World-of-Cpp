// Program to print fibonaci Series

#include<iostream>
using namespace std;

int Fib(int);

int main()
{
	int n;
	cout<<"Enter the number till which you need the Fibonaci Series: ";
	cin >> n;
	for(int i=1;i<=n;i++)
	{
	cout<< Fib(i)<< " ";	
	}

}

int Fib(int n)
{
	if(n==1 || n==2)
	return(1);
	return(Fib(n-1)+Fib(n-2));
}










                                [ Read 8 lines ]
^G Get Help  ^O Write Out ^W Where Is  ^K Cut Text  ^J Justify   ^C Cur Pos
^X Exit      ^R Read File ^\ Replace   ^U Paste Text^T To Spell  ^_ Go To Line

