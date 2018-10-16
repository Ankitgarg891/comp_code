//
//  main.cpp
//  PINS
//
//  Created by Ankit Garg on 06/07/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
using namespace std;
#include <cmath>

int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
    int n;
    int num=1;
    int den;
    cin>>n;
        cout<<1<<" "<<1;
        if(n%2==0){
        for (int i=0; i<n-n/2; i++) {
            cout<<0;
        }}
        else
        {
            for (int i=0; i<n-((n/2)+1); i++) {
                cout<<0;
            }
        
        }
        
        cout<<endl;
        
    }
    
    
    
    return 0;
}
