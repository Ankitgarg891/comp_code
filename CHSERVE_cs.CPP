#include <iostream>
using namespace std;

int main()
{


	int t;
	cin>>t;
	while (t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		//int d=(a+b)/c;
		if (((a+b)/c)%2==0)
			cout<<"CHEF"<<endl;
		else
			cout<<"COOK"<<endl;

	}
}
