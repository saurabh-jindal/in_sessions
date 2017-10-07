#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;                // time complexity O(n*t)
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int minm=1000000,minindex; 
// as given in question element entered are less than 1 lakh so i took a number greater than 1 lakh(1M here) to get in safe zone.        
        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
            if(arr[i]<minm)
            {
                minm=arr[i];
                minindex=i;
            }
        }
        cout<<minindex+1<<endl;   // since it is "one indexed array" I added 1 to minindex.
        
 
    }
    return 0;
} 