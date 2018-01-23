#include <iostream>
#include<string>
using namespace std;
void permutation_1(string s,int a)
{
	if(a==s.size())
	{
		cout<<s<<endl;
	}
	for(int i = a;i<s.size();i++)
	{
		swap(s[a],s[i]);
		permutation_1(s,a+1);
		swap(s[a],s[i]);
	}
}

int main()
{
	string s;
	cin>>s;
	permutation_1(s,0);
}