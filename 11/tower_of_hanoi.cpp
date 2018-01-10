#include<iostream>
using namespace std;

void hanoi(int n,char src,char helper,char target)
{
		if(n==0)
    {
      return;
    }
		hanoi(n-1,src , target,helper);
  	cout<<n<<"moved from src "<<src<< " to "<<target<<endl;
  	hanoi(n-1,helper,src,target);
}



  int main()
{
hanoi(4,'A','B','C');
    
}

