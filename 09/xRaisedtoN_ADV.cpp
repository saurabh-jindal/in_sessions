#include <iostream>
using namespace std;
long long xRaisedtoN(int x,int n){
	if(n==0) return 1;
	long long nxt_ans=xRaisedtoN(x,n/2);
	if(n%2==0) return nxt_ans*nxt_ans;
	else return x*nxt_ans*nxt_ans; 
}
int main(){
	int n,x;
	cin>>x>>n;
	cout<<xRaisedtoN(x,n);
}