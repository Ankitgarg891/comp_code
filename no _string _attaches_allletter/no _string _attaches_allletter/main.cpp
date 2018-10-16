//
//  main.cpp
//  no _string _attaches_allletter
//
//  Created by Ankit Garg on 09/07/18.
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
            }
            
            x_g+=x;
            y_g+=y;
            
            arr[start]--;
            
            cout<<"after "<<k<<"    x:"<<x<<"   y:"<<y<<endl;
            
        }
        
        //  cout<<" final   x:"<<x_g<<"y:"<<y_g<<endl;
        cout<<x_g+y_g<<endl;
        
        
    }
    
    
    
}
