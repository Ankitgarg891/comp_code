


//CHHAPPY  code chef

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
typedef unordered_multimap <int,int> :: iterator umit;

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		unordered_multimap <int,int> umap ;
		vector <int> v(n);

		for (int i=0;i<n;i++)
		{
			cin>>v[i];

			umap.insert(make_pair(v[i],i+1));
			//umap[v[i]]=i+1;
		}

		sort(v.begin(),v.end());

		umit it;

		int flag=0;
		int l=0,r=0;
		for (int i=0;i<n;i=i+1+r-l)
		{
			 l=i;
			 r=l;
			while (v[r+1]==v[l])
			{
				r++;
			}
			int ctr=0;

			//cout<<"\nl:"<<l<<"\nr:"<<r<<endl;
			if (l!=r){
			for (int j=l;j<=r;j++)
			{
				//int ctr=0;
				//cout<<"value to find:"<<v[j]<<endl;
				it=umap.find(v[j]);
				int to_find;
				if (it!=umap.end())
				{
					to_find=it->second;
					//cout<<"to_find:"<<to_find<<endl;
				}

				umit it2=umap.find(to_find);
				if (it2 != umap.end())
				{
					//cout<<it2->first<<"--found";
					ctr++;  
					//cout<<"\n\nctr:"<<ctr<<endl;
					
				}
				if (it!=umap.end()) umap.erase(it);


			} }
			if (ctr>=2)
			{
				cout<<"Truly Happy"<<endl;
				flag=1;
				break;

			}

			


		}

		if (flag==0)
		{
			cout<<"Poor Chef"<<endl;		}





	}



	return 0;
}



