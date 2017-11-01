#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int factor = 0;
		while(n--)
		{
			int a;
			cin>>a;
			while(a%2 == 0)
			{
				a = a/2;
				factor++;
			}
		}
		if(factor%2 == 0)
			cout<<"Alan" <<"\n";
		else
			cout<<"Charlie" <<"\n";
	}
}