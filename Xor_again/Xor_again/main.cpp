//
//  main.cpp
//  Xor_again
//
//  Created by Ankit Garg on 04/05/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int len;
        cin>>len;
        int a[len];
        int c1;
        for (int i=0;i<len;i++)
        {
            cin>>c1;
            a[i]=c1+c1;
            
        }
        
        if (len==1)
        {
            cout<<a[0]<<endl;
        }
        else
        {
            int xor1=a[0]^a[1];
            for (int i=2;i<len;i++)
            {
                xor1=xor1^a[i];
            }
            
            cout<<xor1<<endl;
            
        }
        
        
        
        
       
        
        
        
        
        
    }
    
    
    
    
    
    
    return 0;
}
