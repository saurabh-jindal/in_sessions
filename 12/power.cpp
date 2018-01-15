#include <iostream>
using namespace std;
int power_lin(int x,int a)
{
	if(a <= 0)
		return 1;
	else
		return x*power_lin(x,a-1);
}


int power_bin(int x,int a)
{
	if(a==0)
		return 1;
	int m = power_bin(x,a/2);
	if(a%2 == 0)
		return m*m;
	else
		return x*m*m;
}


int main()
{
	int x,a;
	cin>>x>>a;
	cout<<power_lin(x,a)<<endl;
	cout<<power_bin(x,a)<<endl;

}