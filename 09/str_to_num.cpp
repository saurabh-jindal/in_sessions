#include <iostream>
#include <string>
using namespace std;

int num(string &s, int i,int len){
	return (i==-1) ? 0: ((s[i]-48)+num(s,i-1,len))*10;
}
int str_to_int(string &s){
	return (s[s.length()-1]-48) + num(s,s.length()-2,s.length());	// ones digit + remaining number
}
int main(){
	string s,s2;
	cin>>s;
	int n=str_to_int(s);	// A good example of INDIRECT RECURSION
	cout<<n;
}