//
//  main.cpp
//  no_strings_attched
//
//  Created by Ankit Garg on 08/07/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
    
    string s;
    
    cin>>s;
    
    int n=s.size();
    
    
   // cout<<n<<endl;
    
    int arr[26]={0};
    
    for (int i=0;i<n;i++)
    {
       // cout<<s[i]-'a'<<"   ";
        
    arr[int(s[i])-int('a')]+=1;
    }
    
    //cout<<endl;
/*
    for (int i=0;i<26;i++)
    {
         cout<<i<<":"<<arr[i]<<"  "<<endl;
    
    }
    */
   
   
    
    int x_g=0,y_g=0;
    int max_glob=0;
        int index=0;
        
        
        
    for (int k=0;k<n;k++)
    {   int start=s[k]-'a';
        //cout<<"start:"<<start<<endl;
        int sum=0;
        int diff=0;
        int glob=0;
        int x=0,y=0;
        for (int i=start+1;i<26;i++)
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
                
                
                if (glob-x>max_glob && x>0)
                {
                    max_glob=glob-x;
                    x_g=x;
                    index=start;
                }
                
            }
        arr[start]--;
        y_g+=glob;
        
       cout<<"after "<<k<<"    x:"<<x<<"   y:"<<y<<"    glob:"<<glob<<endl;

    }
    
    cout<<" final   y_g:"<<y_g<<"   max_globe:"<<max_glob<<endl;
        cout<<"Answer:"<<endl;
        
    cout<<y_g-max_glob<<endl;
        
        
    }

    

}
