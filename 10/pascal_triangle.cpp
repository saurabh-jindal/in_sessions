#include <iostream>
using namespace std;
int com(int n,int r)
{
	if(n==r)
	return 1;
	else if(r == 0)
	return 1;
	else return com(n-1,r-1)+com(n-1,r);
}
int main()
{
	int n;
	cin>>n;
	for(int i = 0;i<=n;i++)
	{
		for(int j = 0;j<=i;j++)
		{
			cout<<com(i,j)<<" " ;			
		}
		cout<<"\n";
	}
}