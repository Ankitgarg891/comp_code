//
//  main.cpp
//  minimum_deletions_gcd
//
//  Created by Ankit Garg on 04/05/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
using namespace std;

int gcd(int n1,int n2)
{
    int remain;
    while (true)
    {
        remain=n2%n1;
        n2=n1;
        
        if (remain==0)
        {
            return n1;
        }
        n1=remain;
        



    }

}

int main(int argc, const char * argv[]) {
    
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
    int len;
    cin>>len;
    int a[len];
    for (int i=0;i<len;i++)
    {
        cin>>a[i];
    }
    int final_gcd=gcd(a[0],a[1]);
    for (int i=2;i<len;i++)
    {
        final_gcd=gcd(final_gcd,a[i]);
        
        
    }
    if (final_gcd==1)
    {
        cout<<0<<endl;
    }
    else{
        cout<<-1<<endl;}
        
        
    }
    
    
    
    return 0;
}
