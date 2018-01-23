//wildcard pattern
#include <iostream>
#include <cstring>
using namespace std;

bool wildcard_pattern(char a[],char b[],int akahase,int bkahase)
{
	if(akahase == strlen(a) && bkahase == strlen(b))
		return true;
	else if(akahase != strlen(a) && bkahase == strlen(b) )
		return false;
	else if(akahase == strlen(a) && bkahase != strlen(b) )
		return false;



	if(a[akahase]==b[bkahase])
		return wildcard_pattern(a,b,akahase+1,bkahase+1);
	else if(b[bkahase]=='*')
	{
		return ((wildcard_pattern(a,b,akahase+1,bkahase)||
			wildcard_pattern(a,b,akahase,bkahase+1)||wildcard_pattern(a,b,akahase+1,bkahase+1)));

	}
	else if(b[bkahase]=='?')
		return wildcard_pattern(a,b,akahase+1,bkahase+1);
	else if(a[akahase]!=b[bkahase])
		return false;


	return false;

}

int main()
{
	char a[10],b[10];
	cin>>a;
	cin>>b;
	if(wildcard_pattern(a,b,0,0))
		cout<<true;
	else
		cout<<false;
}