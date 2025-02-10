#include <bits/stdc++.h>
using namespace std;
typedef long int int32;
typedef long long int int64;
typedef long long ll;
typedef vector<long long> vll;
typedef vector<vector<ll>> vvl;
#define endl "\n"
const ll INF = 0x3f3f3f3f; // inf

ll min(ll a, ll b) { return (a < b) ? a : b; }
ll max(ll a, ll b) { return (a > b) ? a : b; }

vector<bool> isPrime;
void preprocess_sieve(ll maxi) 
{
    isPrime = vector<bool>(maxi + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= maxi; ++i) {
        if (isPrime[i]) {
            for (ll j = i * i; j <= maxi; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

void solve() {
    ll n;cin>>n;
    vll a(n);
    map<ll, ll> m;
    ll pr=0,ans=0;
    for (ll i=0;i<n;i++) 
    {
        cin>>a[i];
        m[a[i]]++;
        if(isPrime[a[i]])pr++;
    }
    
    for(auto x:m) 
    {
        if(isPrime[x.first]) 
        {
            ans+=x.second*(pr-x.second);
        }
    }
    ans/=2; 

    for(auto x:m) 
    {
        auto num=x.first;
        auto freq=x.second;
        if(num<2)continue;
        ll d1=-1,d2=-1;
        for (ll j=2;j*j<=num;j++) 
        {
            if(num%j==0) 
            {
                d1=j;
                d2=num/j;
                if(isPrime[d1] && isPrime[d2] && d1*d2==num) 
                {
                    break;
                } 
                else 
                {
                    d1=d2=-1;
                }
            }
        }
        if(d1!=-1 && d2!=-1) 
        {
            ll c1=freq;
            ll tm=m[d1];
            if(d1!=d2)tm+=m[d2];
            ans+=c1*tm;
            ans+=c1*(c1+1)/2;
        }
    }

    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    preprocess_sieve(1000000);
    while (t--) {
        solve();
    }
    
    return 0;
}
