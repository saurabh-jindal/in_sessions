#include<iostream>
using namespace std;
int main()
{   // time complexity O(n*sqrt(n)+q)  where q is number of queries and n is order of building ht and number of buildings
    int no_of_buildings;                        
    cin>>no_of_buildings;                                // input number of buildings in first line.
    int height_buildings[no_of_buildings];               // array to store height of each buliding.
    int maxm=-1;
    for (int i = 0; i < no_of_buildings; ++i)
    {
        cin>>height_buildings[i];
        maxm=max(maxm,height_buildings[i]);           
    } 
     // when for loop finishes maxm will have value of largest element in array                                                    
    int factors[maxm+1]={0};                           // declaring array of factors. all values intially are zero.
    for (int i = 0; i < no_of_buildings; ++i)
    {
        int ele=height_buildings[i];
        for (int j = 1; j*j <= ele; ++j)
        {
            if(ele%j==0)    
            {
                factors[j]++;
                if(j*j!=ele)
                factors[ele/j]++;
            }
        }
    }
 
    int no_of_queries;
    cin>>no_of_queries;
    while(no_of_queries--)
    {
        int q;
        cin>>q;
        if(q<=maxm) cout<<factors[q]<<endl;
        else        cout<<"0\n";
    }
    return 0;
}
