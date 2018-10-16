//chef_res
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair <int,int> a , pair <int,int> b)
{
	return (a.first<b.second);
}
int main()
{
	int t;
	cin>>t;
	while (t--)
	{

		int n,m;
		cin>>n>>m;
		vector <pair <int , int> > v1(n,make_pair(0,0));
		for (int i=0;i<n;i++)
		{
			int l,r;
			cin>>l>>r;
			v1[i]=make_pair(l,r);

		}
		sort(v1.begin(),v1.end(),cmp);
		//vector <int> v2 (m);
		for (int i=0;i<m;i++)
		{
			int v2;
			cin>>v2;
			if (v2<v1[0].first)
			{
				cout<<v1[0].first-v2<<endl;
			}
			else if (v2>=v1[n-1].second)
				{cout<<-1<<endl;}
			else
			{
				int start=0;
				int end=n-1;

				int mid;
				//int m1=v2[j];
				int ptr;

				while (start<=end)
				{
					mid=(start+end)/2;

					if (v2>=v1[mid].first)
					{
						ptr=mid;
						start=mid+1;
					}
					else
					{
						end=mid-1;
					}

					

				}

				if (v2>=v1[ptr].first && v2<v1[ptr].second)
				{
					cout<<0<<endl;
				}
				else
				{
					cout<<v1[ptr+1].first-v2<<endl;
				}
			}





		}


	



	}
	return 0;
}