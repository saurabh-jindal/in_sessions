#include <iostream>
#include <cmath>
using namespace std;
int pro(int n,int power)
{
	int product = 1;
	for (int i = 0; i < power; ++i)
	{
		product *= n;
	}
	return product;
}
int rec(int rem,int power,int i)
{
	//cout<<rem<< "  "<<i<<" ";
	if((rem-pro(i,power))==0)
	{
		return 1;
	}
	
	if((rem-pro(i,power)) < 0)
	{
		return 0;
	}
	
	int result =  rec((rem-pro(i,power)),power,i+1) + rec(rem,power,i+1);
	return result;
}
int main()
{
	
		int a,b;
		cin>>a>>b;
		cout<<rec(a,b,1)<<"\n";

}