#include <iostream>
using namespace std;
long long count0(int n){
	return (n==0)? 0 : count0(n/10)+((n%10==0)?1:0); 
}
int main(){
	int n;
	cin>>n;
	cout<<count0(n);
}