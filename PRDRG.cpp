//chef and ridges

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{	
	int t;
	cin>>t;
	int n=t;
	vector <int> v1 (n+1);
	int max=1;
	for (int i=1;i<=n;i++)
	{
		cin>>v1[i];
		if (v1[i]>max) max=v1[i];
	}

	vector < pair<int,int> > v2 (max+1,make_pair(0,0));

	v2[1].first=1;
	v2[1].second=2;

	for (int i=0;i<=max;i++)
	{
		v2[i+2].first=v2[i+1].second-v2[i+1].first;
		v2[i+2].second=v2[i+1].second*2;

	}


	for (int i=1;i<=t;i++)
	{
		cout<<v2[v1[i]].first<<" "<<v2[v1[i]].second<<" ";
	} 



	return 0;
}