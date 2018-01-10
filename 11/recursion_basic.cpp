#include <iostream>
using namespace std;
int fact(int n)
{
	if(n==0)
		return 1;
	int m = fact(n-1);
	int ans = n*fact(n-1);
	return ans;
}


void printn(int n)
{
	if(n==1)
	{
		cout<<1<<" ";
		return;
	}
	cout<<n<<" ";
	printn(n-1);
	return;
}


int power(int n,int x)
{
	if(x == 0)
		return 1;
	return n*power(n,x-1);
}


int maxim(int arr[],int be,int end)
{
	if(be==end)
		return arr[be];
	else
		return max(arr[be],maxim(arr,be+1,end));
}

void disarray(int arr[],int be,int end){

	if(be>end)
	{
		return;
	}

	cout<<arr[be]<<" ";
	disarray(arr,be+1,end);

}

int fib(int n)
{
	if(n<=1)
	{
		return n;
	}
	return fib(n-1)+fib(n-2);
}


void disarrayrev(int arr[],int be,int end){
	if(be>end)
	{
		return;
	}
	
	disarrayrev(arr,be+1,end);
	cout<<arr[be]<<" ";
}

int sumofarr(int arr[],int be,int end)
{
	if(be>end)
		return 0;
	else
		return sumofarr(arr,be+1,end) + arr[be];
}

int binarysearch(int arr[],int be,int end,int x)
{
	if(be>end) return -1;

	int midle = (be+end)/2;
	if(arr[midle] == x)
		return midle;
	else if(arr[midle]>x)
		return binarysearch(arr,be,midle-1,x);
	else
		return binarysearch(arr,midle+1,end,x);
}

int main()
{
	int n;
	// cin>>n;
	int arr[] = {1,2,3,4,5,6};
	// cout<<fact(n);
	// printn(n);
	// cout<<power(n,3)<<" ";
	// cout<<maxim(arr,0,4);
	cout<<binarysearch(arr,0,5,6);
}