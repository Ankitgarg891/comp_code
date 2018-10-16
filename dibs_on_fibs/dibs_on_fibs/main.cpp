//
//  main.cpp
//  dibs_on_fibs
//
//  Created by Ankit Garg on 08/05/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // insert code here...
    
    int result=0;
    int m;
    int n;
    cin>>m;
    cin>>n;
    
    int arr1[m];
    
    for (int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    int arr2[m];
    for (int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<m;j++)
        {
            int fib[n];
            fib[0]=arr1[i];
            fib[1]=arr2[j];
            for (int k=2;k<n;k++)
                {
                fib[k]=fib[k-1]+fib[k-2];
                }
            
            result=result+fib[n];
            
        
        }
    
    }
    
    
    
    
    
    return 0;
}
