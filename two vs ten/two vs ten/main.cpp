//
//  main.cpp
//  two vs ten
//
//  Created by Ankit Garg on 28/04/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int two_ten(int num)
{
    int ctr=0;
    if ((num%10==5) || num%10==0)
    {
        while (num%10!=0)
        {
            num=num*2;
            ctr++;
        }
        return ctr;
        
        
        
        
    }
    else
    {
        return -1;
    }
    


}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    
    
    }
    for(int i=0;i<n;i++)
    {
        cout<<two_ten(arr[i])<<endl;
        
        
        
    }
    
    
    
        
    
    
    
    
    
    
    
    
    
    return 0;
}
