//boring_string_he
#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{

	int n,a,b;

	cin>>n>>a>>b;

	long long arr[n];

	arr[0]=a;

	for (int i=1;i<n;i++)
	{
		if (i%2!=2)
		{
			arr[i]=min(arr[i/2]+b,arr[i-1]+a);
		}
		else
		{
			arr[i]=min(arr[i/2]+b+a,arr[i-1]+a);

		}
	}

	cout<<arr[n-1];



	return 0;
}