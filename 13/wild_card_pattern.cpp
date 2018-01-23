#include <iostream>
#include <cstring>
using namespace std;

bool batabhai(char a[],char b[],int akahase,int bkahase)
{

	if(a[akahase]=='\0'||b[bkahase]=='\0')
	{
		if(a[akahase]=='\0'&&b[bkahase]=='\0')
			return true;
		else if(bkahase == strlen(b)-1 && b[bkahase]=='*')
			return true;
		else
			return false;
	}


	if(a[akahase] == b[bkahase]||b[bkahase]=='?')
		return batabhai(a,b,akahase+1,bkahase+1);
	if(b[bkahase] == '*')
	{
		return batabhai(a,b,akahase+1,bkahase)||batabhai(a,b,akahase,bkahase+1);
	}
	if(a[akahase]!= b[bkahase])
	{
		return false;
	}

}




int main()
{
	char a[10],b[10];
	cin>>a>>b;
	if(batabhai(a,b,0,0))
		cout<<"matched";
	else
		cout<<"not matched";


}