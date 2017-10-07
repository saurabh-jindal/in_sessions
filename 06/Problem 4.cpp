#include<iostream>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int no_of_dolls;
        cin>>no_of_dolls;
        int arr[no_of_dolls];
        int xorvalues=0;         //learn basic properties of xor gate to understand this solution
        for (int i = 0; i < no_of_dolls; ++i)
           {
               cin>>arr[no_of_dolls];
               xorvalues=xorvalues^arr[no_of_dolls];     
           }
        cout<<xorvalues<<endl;    
    }
} 