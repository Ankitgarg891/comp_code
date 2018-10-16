//infox_15th
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n,d;
    cin>>n>>d;
    
    long long ans=1;
    for (int i=0;i<d;i++)
    {
        ans=ans*15;
    }
    
    ans*=n;
    cout<<ans;
    
    return 0;
    
}