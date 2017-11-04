#include <iostream>
#include <string>
using namespace std;
string remove_pi(string &s, int i,int len){
	if(i==len) return "";
	return (s[i]=='p')?((s[i+1]=='i')? "3.14"+remove_pi(s,i+2,len):s[i]+remove_pi(s,i+1,len)):s[i]+remove_pi(s,i+1,len);

}
int main(){
	string s,s2;
	cin>>s;
	s2+=remove_pi(s,0,s.length());
	cout<<s2;
}