#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	// int max = 0;
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
		// if(v[i]>max)
		//	max = v[i];
	}
	int arr[100005] = {0};
	for (int i = 0; i < n; ++i)
	{
		for(int j = 1;j*j <= v[i];j++)
		{
			if(v[i]%j == 0)
			{
				arr[j]++;
				if(j*j!=v[i])
				arr[v[i]/j]++;
			}
		}
	}
	int q;
	cin>>q;
	while(q--)
	{
		int a;
		cin>>a;
		cout<<arr[a]<<"\n";
	}

}