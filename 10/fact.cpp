#include <iostream>
using namespace std;
int fact(int n)
{
	cout<<"i am calculatinfg for n "<<n<<"\n";
	int fac;
	if(n==1)
		fac = 1;
	else
		fac =  n*fact(n-1);
	cout<<"i have calculated fact "<<fac<<endl;
	return fac;

}
int main()
{
	int n;
	cin>>n;
	cout<<fact(n);
}