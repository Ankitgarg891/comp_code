//
//  main.cpp
//  no_strings_attched
//
//  Created by Ankit Garg on 08/07/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
using namespace std;

#define ll long long


int main(int argc, const char * argv[]) {
    
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
{
    
    string s;
    
    cin>>s;
    
    ll n=s.size();
    
    
   // cout<<n<<endl;
    
    ll arr[26]={0};
        
    ll arr1[26]={0};
    
    
    
    
    
    for (ll i=0;i<n;i++)
    {
       // cout<<s[i]-'a'<<"   ";
        
        arr[int(s[i])-int('a')]+=1;
        arr1[int(s[i])-int('a')]+=1;
    }
    
    //cout<<endl;
/*
    for (int i=0;i<26;i++)
    {
         cout<<i<<":"<<arr[i]<<"  "<<endl;
    
    }
    */
   
   
    
    long long y_g=0,y_g1=0;
    ll max_glob=0;
    ll max_glob1=0;
 
        
        
        
   for (ll k=0;k<n;k++)
    {   ll start=s[k]-'a';
        //cout<<"start:"<<start<<endl;
        ll sum=0;
        ll diff=0;
        ll glob=0;
        ll x=0;
        ll y=0;
        for (ll i=start+1;i<26;i++)
            {
            sum+=arr[i];
            y+=arr[i];
            diff=i-start;
            if (diff<sum  && sum>glob)
                {
                    x=diff;
                    y=0;
                }
                glob=sum;
                if (glob-x-y>max_glob && x>0)
                {
                    max_glob=glob-x-y;
                   // x_g=x;
                   // index=start;
                }
                
            }
        arr[start]--;
        y_g+=glob;
        
     //  cout<<"after "<<k<<"    x:"<<x<<"   y:"<<y<<"    glob:"<<glob<<endl;

    }
   
   for (ll k=n-1;k>=0;k--)
    {   ll start=s[k]-'a';
        //cout<<"start:"<<start<<endl;
        ll sum=0;
        ll diff=0;
        ll glob=0;
        ll x=0,y=0;
        for (ll i=start-1;i>=0;i--)
        {
            sum+=arr1[i];
            y+=arr1[i];
            diff=start-i;
            if (diff<sum  && sum>glob)
            {
                x=diff;
                y=0;
            }
            glob=sum;
            
            
            if (glob-x-y>max_glob1 && x>0)
            {
                max_glob1=glob-x-y;
               // x_g=x;
                //index=start;
            }
            
           
            
            
        }
        arr1[start]--;
        y_g1+=glob;
        //cout<<"for minus"<<endl;
        
        
      //  cout<<"after "<<k<<"    x:"<<x<<"   y:"<<y<<"    glob:"<<glob<<endl;
        
      
    }
    
   // cout<<max_glob<<endl;
    
    
    
    //cout<<" final   y_g:"<<y_g<<"   max_globe:"<<max_glob<<endl;
      //  cout<<"Answer:"<<endl;
        
    cout<<min(y_g-max_glob,y_g1-max_glob1)<<endl;
        
        
        
    }

    

}
