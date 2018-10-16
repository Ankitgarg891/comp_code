//
//  main.cpp
//  mgcet
//
//  Created by Ankit Garg on 06/07/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
    int len,m;
    cin>>len>>m;
    
    
    int *arr=new int[len];
    
    for (int i=0;i<len;i++)
    {
        cin>>arr[i];
        
    }
    int ctr=0;
    for (int i=0;i<len;i++)
    {
        if (arr[i]%m==0)
        {
            ctr++;
        }
    }
    
    int ans=1<<ctr;
    
    cout<<ans-1<<endl;
    
    
    
    
    
    }
    
    return 0;
}
