#include <iostream>
using namespace std;
int no_of_ways(int arr[],int coins,int paisekitnebache,int kahase)
{
	if(paisekitnebache < 0)
		return 0;
	if(paisekitnebache==0)
		return 1;
	int m = 0;
	for (int i = kahase; i < coins; ++i)
	{
		m = m+no_of_ways(arr,coins,paisekitnebache-arr[i],i);
	}
	return m;
}

int main()
{
	int arr[] = {1,2,3,5};
	int paise = 10;
	cout<<no_of_ways(arr,4,paise,0);

}

