#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e6)
#define ll long long

int main() 
{
    set<ll> s1;
    for(ll k=2;k<=1000;k++)
    {
        ll val=1+k;
        ll p=k*k;
        for(int F=2;F<=20;F++)
        {
            val+=p;
            if(val>MOD)break;
            s1.insert(val);
            p*=k;
        }
    }

    int t;cin>>t;
    while (t--) 
    {
        int n;cin>>n;
        if(s1.count(n))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
