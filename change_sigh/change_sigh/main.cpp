#include<iostream>
#include<vector>
using namespace std;
#define ll long long;
vector<long long> bhai_nagetive_kar(vector<long long> v){
    long long sum1 = 0,sum2= 0;
    for(long long i = 0;i<v.size();i=i+4)
    {
        sum1+=v[i];
    }
    for (long long i = 2; i < v.size(); i = i+4)
    {
        sum2+=v[i];
    }
    if (sum1 >= sum2)
    {
        for (long long i = 0; i < v.size(); i=i+4)
        {
            v[i] = v[i]*-1;
        }
    }
    else
    {
        for (long long i = 2; i < v.size(); i = i+4)
        {
            v[i]=v[i]*-1;
        }
        
    }
    return v;
};

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        std::vector<long long> v(n);
        for (long long i = 0; i < n; ++i)
        {
            cin>>v[i];
        }
        if(n==1)
        {
            cout<<v[0]<<endl;
            continue;
        }
        vector<long long> v1(n);
        long long i = 0;
        while(i<n)
        {
            //if a number cannot be nagetive
            if(i==0 && v[i+1]<=v[i])
                v1[i]=v[i++];
            else if(i==n-1 && v[i]>=v[i-1])
                v1[i]=v[i++];
            else if((i!=0) && (i!=n-1) && ((v[i]>=v[i+1])||(v[i]>=v[i-1])) )
                v1[i]=v[i++];
            else {
                // cout<<v[i]<<endl;
                long long ci=i;
                while(ci+2<n && v[ci]+v[ci+2]>=v[ci+1] && (v[ci+2]<v[ci+1] && (ci+3==n || v[ci+3]>v[ci+2]))){
                    ci = ci+2;
                }
                // cout<<ci<<endl;
                std::vector<long long> nv;
                for (int j = i; j < ci+1; ++j)
                {
                    nv.push_back(v[j]);
                }
                // for (int l = 0; l < nv.size(); ++l)
                // {
                // 	cout<<nv[l]<<" ";
                // }
                // cout<<endl;
                nv = bhai_nagetive_kar(nv);
                // for (int l = 0; l < nv.size(); ++l)
                // {
                // 	cout<<nv[l]<<" ";
                // }
                // cout<<endl;
                long long j = 0;
                int k = i;
                for (j = 0; j < nv.size(); ++j)
                {
                    v1[i++] = nv[j];
                }
                
            }
            
        }
        
        for (long long i = 0; i < v1.size(); ++i)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
    }
}

/*
11
1
1
2
1 2
3 
1 2 1
4
4 3 1 2
6
1 2 2 1 3 1
5
10 1 2 10 5
4
1 2 1 2
10
2 1 3 2 4 3 5 4 6 3
10
1 1 1 2 1 2 1 1 1 1
10
2 1 1 2 5 3 7 10 1 2
15
10 1 2 10 5 2 1 1 2 5 3 7 10 6 5
4
4 4*/
