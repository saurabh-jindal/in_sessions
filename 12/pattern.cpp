#include <iostream>
using namespace std;

void printnstar(int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout<<"*";
	}
	cout<<endl;
}

void printpattern(int n)
{
	if(n==0)
		return;
	printpattern(n-1);
	printnstar(n);
}

void printpattern_reverse(int n)
{
	if(n==0)
		return;
	printnstar(n);
	printpattern_reverse(n-1);
}
int main()
{
	int n;
	cin>>n;
	printpattern(n);
	cout<<endl;
	printpattern_reverse(n);
	cout<<endl;
}