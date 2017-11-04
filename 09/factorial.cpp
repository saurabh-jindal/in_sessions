#include <iostream>
using namespace std;
long long fact(int n){
	return (n==0)? 1 : n*fact(n-1);
}
int main(){
	int n;
	cin>>n;
	cout<<fact(n);
}