#include <iostream>
using namespace std;

int main()
{
	
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		int ctr=0;

		for (int i=0;i<n;i++){

			int a1;
			int a2;
			cin>>a1>>a2;
			if (a2-a1>5)
			{
				ctr++;
			}

		}

		cout<<ctr<<endl;





	}
	return 0;
}