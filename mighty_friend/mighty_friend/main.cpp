//
//  main.cpp
//  mighty_friend
//
//  Created by Ankit Garg on 04/05/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;





void swap(int &n1,int &n2)
{
    int temp=n1;
    n1=n2;
    n2=temp;
    
}
int main() {
    
    
    int test;
    cin>>test;
    for (int i=0;i<test;i++)
    {
    
    
    int n;
    cin>>n;
    int k;
    cin>>k;
    
    vector <int> v1;
    vector <int> v2;
    for (int i=0;i<n;i++)
    {
        int data;
        cin>>data;
        if (i%2==0)
        {
            v1.push_back(data);
        }
        else
        {
            v2.push_back(data);
        }
        
        
    }
    
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    
    
    
    int s1=v1.size();
    int s2=v2.size();
    
    
    
    

    
    for (int i=0;i<k;i++)
    {
        if (i>=s2 || v1[s1-i-1]<v2[i])
            {
                break;
            }
        else
            {
                
                swap(v1[s1-i-1],v2[i]);
            }
    }
    
    
    
   
    int sum1=0;
    int sum2=0;
    for (int i=0;i<s1;i++)
    {
        sum1=sum1+v1[i];
        //sum2=sum2+v2[i];
    }
        for (int i=0;i<s2;i++)
        {
           // sum1=sum1+v1[i];
            sum2=sum2+v2[i];
        }
    
   
    
    if (sum2>sum1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    
        
    }
        
    
    
    
    
    return 0;
}
