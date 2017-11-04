#include <iostream>
#include <string>
using namespace std;
void remove_x(string s, int i,int len,string &s2){
	if(i==len) return ;
	// return (s[i]!='x')? s[i]+remove_x(s,i+1,len):remove_x(s,i+1,len);
	if(s[i]!='x') s2+=s[i];
	remove_x(s,i+1,len,s2);
}
int main(){
	string s,s2;
	cin>>s;
	remove_x(s,0,s.length(),s2);
	cout<<s2;
}