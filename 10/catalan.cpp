#include <iostream>
using namespace std;

int catalan(int n)
{
	if(n==0 || n==1)
		return 1;
	else
	{
		int cat = 0;
		for (int i = 0; i <=(n-1); i++)
		{
			cat = cat + catalan(i)*catalan(n-i-1);
		}
		return cat;
	}
}
int main()
{
	int n;
	cin>>n;
	cout<<catalan(n);
}