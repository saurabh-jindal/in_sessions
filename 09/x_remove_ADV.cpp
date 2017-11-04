#include <iostream>
#include <string>
using namespace std;
string remove_x(string &s, int i,int len){
	if(i==len) return "";
	return (s[i]!='x')? s[i]+remove_x(s,i+1,len):remove_x(s,i+1,len);

}
int main(){
	string s,s2;
	cin>>s;
	s2+=remove_x(s,0,s.length());
	cout<<s2;
}