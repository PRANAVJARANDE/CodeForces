#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

bool check(vector<ll>&a)
{
    ll n=a.size();
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            return 0;
        }
    }
    return 1;
}
 
void swap1(vector<ll>&a)
{
    ll n=a.size();
    ll hf=n/2;
    for(int i=0;i<hf;i++)
    {
        swap(a[i],a[i+hf]);
    }
}
 
void swap2(vector<ll>&a)
{
    ll n=a.size();
    for(int i=0;i<n;i+=2)
    {
        swap(a[i],a[i+1]);
    }
}

void solve()
{
    ll n;cin>>n;
    vector<ll> a(2*n);
    for(int i=0;i<2*n;i++)cin>>a[i];
    if(check(a))
    {
        cout<<"0"<<endl;
        return;
    }

    vector<ll> a11=a;

    ll ans=LLONG_MAX;
    ll c1=0;
    ll maxi=n;
    while(maxi--)
    {
        swap1(a);
        c1++;
        if(check(a))
        {
            ans=min(ans,c1);
            break;
        }
        swap2(a);
        c1++;
        if(check(a))
        {
            ans=min(ans,c1);
            break;
        }
    }
    maxi=n;
    c1=0;
    while(maxi--)
    {
        swap2(a11);
        c1++;
        if(check(a11))
        {
            ans=min(ans,c1);
            break;
        }
        swap1(a11);
        c1++;
        if(check(a11))
        {
            ans=min(ans,c1);
            break;
        }
    }
    if(ans==LLONG_MAX)ans=-1;
    cout<<ans<<endl;

}


int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    solve();
    return 0;
}
