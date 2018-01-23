#include <iostream>
#include <queue>
#include <functional>
#include <iomanip>

class compare{
public:
int operator()(const int &a,const int &b)
{
	return a<b;
}
};
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<fixed<<setprecision(1);
	priority_queue<int> a;
	priority_queue<int,vector<int>,compare> b;
	int a_size = 0,b_size = 0;
	while(n--)
	{
		int x;
		cin>>x;
		if(a_size+1<b_size)
		{
			int newe = a.top();
			a.pop();
			a_size--;
			b.push(newe);
			b_size++;
		}
		if(b_size+1<a_size)
		{
			int newe = b.top();
			b.pop();
			b_size--;
			a.push(newe);
			a_size++;
		}
		
		if(!b.empty()&&x<b.top())
		{
			a.push(x);
			a_size++;
		}
		else
		{
			b.push(x);
			b_size++;
		}

		if((a_size+b_size)%2!=0)
		{
			if(a_size>b_size)
				cout<<a.top()<<endl;
			else
				cout<<b.top()<<endl;
		}
		else
			cout<<(a.top()+b.top())/2<<endl;
	}
}