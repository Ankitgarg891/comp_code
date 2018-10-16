/*// number exist or not in an array by unordered

#include <iostream>
#include <unordered_map>
#define ll long long 
using namespace std;

int main()
{

    unordered_map <ll,int> umap;
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
          for (int i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            umap[a]=1;
        }


        int q;
        cin>>q;
        while (q--)
        {
            ll key;
            cin>>key;
            //cout<<"query"<<q<<endl;
           
             // If key not found in map iterator to end is returned 
            if (umap.find(key) == umap.end()) 
            {cout<<"No"<<endl; }
  
             // If key found then iterator to that key is returned 
            else
            {cout<<"Yes"<<endl; }
            }


    }


    return 0;
}








*/



#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int* arr=new int[n];
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int q;
        cin>>q;
        while (q--)
        {
            int s;
            cin>>s;
            //cout<<"query"<<q<<endl;
            int start=0;
            int end=n-1;
            int flag=0;
            while (start<=end)
            {
                int mid=(start+end)/2;
                if (arr[mid]==s)
                {
                    flag=1;
                    break;
                }
                else if (arr[mid]<s)
                {start=mid+1;}
                else
                {
                    end=mid-1;
                }
            }
            if (flag==1)  cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        
    }

    
}


