#include <bits/stdc++.h>
using namespace std;


int helper(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return i;
        }
    }
    return n;
}


int main() 
{
    long long t;cin >> t;
    while (t--) 
    {
        int l,r;cin>>l>>r;
        for(int i=l;i<=r;i++)
        {
            if(helper(i)!=i)
            {
                cout<<helper(i)<<" "<<i-helper(i)<<endl;
                break;
            }
            if(i==r)
            {
                cout<<"-1"<<endl;
            }
        }   
    }
    return 0;
}
