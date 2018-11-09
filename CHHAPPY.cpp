#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b)
{
    if (a.first<b.first)
    {return true;}
    else
        return false;
}

bool find(int x, vector <pair<int,int> > v)
{
    int s=0,e=v.size()-1,mid;
    
    while (s<=e)
    {
        mid=(s+e)/2;
        
        if (v[mid].first==x)
        {
            return true;
           
        }
        else
        {
            if (v[mid].first<x)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
    }
    
    
    
    
    return false;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        
        
        vector <pair <int,int> > v (n,make_pair(0,0));
        
        
        for (int i=0;i<n;i++)
        {
            
            cin>>v[i].first;
            v[i].second=i+1;
        }
 
        
        
        sort(v.begin(),v.end(),cmp) ;

        // for (int i=0;i<n;i++)
        // {
        // 	cout<<v[i].first<<"	";
        // 	cout<<v[i].second<<endl;
        // }
   
        
        int flag=0;
        int l,r;
        for (int i=0;i<n;i++)
        {

        	 l=i;
			 r=l;
			 //cout<<"here1";
			while (v[r+1].first==v[l].first)
			{
				r++;
				//cout<<"here2";
			}
			int ctr=0;

			//cout<<"\nl:"<<l<<"\nr:"<<r<<endl;
			
			if (l!=r){
				for (int j=l;j<=r;j++)
				{
					 
					int a=v[j].second;
					//cout<<"\nfindidn.."<<v[j].second<<endl;
	                if (find(a,v))
	                {
	                	ctr++;
	                }
				}
				 if (ctr>=2)
				 {
	                 cout<<"Truly Happy"<<endl;
	                    flag=1;
	                    break;
	             }
	         }


		}
        
        
        if (flag==0)
        {cout<<"Poor Chef"<<endl;}
        
    }
    return 0;
}



// //bittoo
// #include <bits/stdc++.h>
// using namespace std;

// bool search1(vector<int> v1,vector<pair<int,int> > v,int l,int r){
// 	int count = 0;
// 	for (int i = l; i <= r; ++i)
// 	{
// 		if(binary_search(v1.begin(),v1.end(),v[i].second))
// 			count++;
// 		if(count>=2)
// 		{
// 			return true;
// 		}
// 	}
// 	return false;
// }


// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
// 		std::vector<pair<int,int> > v(n+1);
// 		std::vector<int> v1(n+1);
// 		for (int i = 1; i <= n; ++i)
// 		{
// 			cin>>v[i].first;
// 			v1[i] = v[i].first;
// 			v[i].second = i;
// 		}
// 		sort(v.begin(), v.end());
// 		sort(v1.begin(),v1.end());
// 		bool ans = false;
// 		for (int i = 1; i < n; ++i)
// 		{
// 			int l = i;
// 			int r = i;
// 			while((v[i+1].first == v[i].first) && (i<n)){
// 				r++;
// 				i++;
// 			}
// 			if(l!=r){
// 				// cout<<l<<" "<<r;
// 				if(search1(v1,v,l,r))
// 				{
// 					// cout<<l<<" "<<r;
// 					ans = true;
// 					break;
// 				}
// 			}
// 		}
// 		if(ans==true)
// 			cout<<"Truly Happy"<<endl;
// 		if(ans==false)
// 			cout<<"Poor Chef"<<endl;

// 	}
// }