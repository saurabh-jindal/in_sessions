#include <iostream>
using namespace std;

void print_sub(string s,int n)
{

	if(s.size() == n)
	{
		cout<<s<<endl;
		return;
	}
	for(int i = n;i<s.size();i++)
	{
		swap(s[n],s[i]);
		print_sub(s,n+1);
		swap(s[n],s[i]);
	}
}

int main()
{
	string s;
	cin>>s;
	print_sub(s,0);
}