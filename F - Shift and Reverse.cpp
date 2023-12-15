#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

bool is_sorted(vector<ll> &v)
{
    for (int i = 1; i < v.size(); ++i)
    {
        if (v[i] < v[i - 1])
            return false;
    }
    return true;
}
 
bool is_sorted_reverse(vector<ll> &v)
{
    for (int i = 1; i < v.size(); ++i)
    {
        if (v[i] > v[i - 1])
            return false;
    }
    return true;
}
 
void solve()
{
    ll n;cin>>n;
    
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    bool b=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            b=1;
            break;
        }
    }
    if(b==0)
    {
        cout<<"0"<<endl;
        return;
    }

    bool o=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            o=1;
            break;
        }
    }
    if(o==0)
    {
        cout<<"1"<<endl;
        return;
    }

    ll ans=LLONG_MAX;
    ll d=0,pos=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[(i+1)%n])
        {
            d++;
            pos=(i+1)%n;
        }
    }

    if(d<2)
    {
        ans=min(ans,min(n-pos,2+pos));
    }

    d=0,pos=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]<a[(i+1)%n])
        {
            d++;
            pos=(i+1)%n;
        }
    }

    if(d<2)
    {
        ans=min(ans,min(n-pos+1,1+pos));
    }

    if(ans==LLONG_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }
}


int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        solve();
        
    }
    return 0;
}
