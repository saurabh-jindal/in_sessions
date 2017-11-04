#include <iostream>
using namespace std;
long long xRaisedtoN(int x,int n){
	return (n==0)? 1 : x*xRaisedtoN(x,n-1);
}
int main(){
	int n,x;
	cin>>x>>n;
	cout<<xRaisedtoN(x,n);
}