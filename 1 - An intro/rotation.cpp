// rotation of (x1,y1,x2,y2) = (x1,y1,x3,y3) around (x1,y1)
#include <iostream>
using namespace std;
int lengthsq(int x1,int y1,int x2,int y2){
	return((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main(){
	int x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	if(lengthsq(x1,y1,x2,y2)==lengthsq(x1,y1,x3,y3)) cout<<"yes\n";
	else cout<<"no\n";
}