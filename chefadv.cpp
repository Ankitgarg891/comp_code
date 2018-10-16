#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,m,x,y;
		cin>>n>>m>>x>>y;

		if ( (n%x==2  && m%y==2 ) ||  ((n%x==1 || m%y==0) && (m%y==1 || m%y==0)))

			{
				cout<<"Chefirnemo"<<"\n" ;

			}
		else cout<<"Pofik"<<endl;

	}
	return 0;
}