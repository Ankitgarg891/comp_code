#include <iostream>
#include <math.h>
#define ll long long  
using namespace std;

int main()
{
	int t;
	cin>>t;

	while (t--)
	{
		ll c1=0,c2=0,c3=0;
		int a;
		cin>>a;

		a=a-1;
		int b=a/26;
		int c=a%26;
		c1=pow(2,b);
		if (c>=10)
		{
			c3=c1;
			c1=0;
		}
		else if (c>=2)
		{
			c2=c1;
			c1=0;
		}


		
		cout<<c1<<" "<<c2<<" "<<c3<<endl;
	}
	return 0;
}