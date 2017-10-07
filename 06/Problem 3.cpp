#include<iostream>
using namespace std;
int main()
{   // time complexity O(n*log(n))
    int t;
    cin>>t;
    while(t--)
    {
        int sum=0;
        int n,count=0;
        cin>>n;
        while(n--)
        {
            int a;
            cin>>a;
            while(a%2==0)
            {
                count++;
                a/=2;
            }
        }
        if(count%2==0) cout<<"Alan\n";
        else           cout<<"Charlie\n";
    }
}