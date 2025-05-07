#include <bits/stdc++.h>
using namespace std;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef long long ll;
typedef long double ld;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef pair<ll, ll> pl; 
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<pair<long long,long long>> vllp;
typedef vector<pl> vpl;
typedef vector<vector<ll>> vvl;
#define MOD (int)(998244353)
#define endl "\n"
#define sqrt sqrtl
#define pb push_back
#define popb pop_back
#define pf push_front
#define popf pop_front
#define emb emplace_back 
#define mp make_pair
#define mll map<ll, ll>
#define sl set<ll>
#define sc set<char>


#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define ff first
#define ss second


#define all(ds) (ds).begin(), (ds).end()
// Clear Memory
#define clr(ds) memset(ds, 0, sizeof(ds))
// Ascending Vector
#define sort(ds) sort(all(ds))
// Descending Vector
#define rev(ds) reverse(all(ds))
// Total Sum
#define tsum(ds) (accumulate(all(ds), 0ll))
// Count frequency of x
#define ctx(ds, x) (count(all(ds), (x)))
// Size
#define sz(ds) ((ll)(ds).size())
// Min Value
#define minv(ds) (*min_element(all(ds)))
// Max Value
#define maxv(ds) (*max_element(all(ds)))
// Min Value Index
#define minIdx(ds) (min_element(all(ds)) - (ds).begin())
// Max Value Index
#define maxIdx(ds) (max_element(all(ds)) - (ds).begin())
// Binary Search
#define bs(ds, x) (binary_search(all(ds), x))
// Lower Bound Index
#define lob(ds, x) (lower_bound(all(ds), (x)) - (ds).begin())
// Upper Bound Index
#define upb(ds, x) (upper_bound(all(ds), (x)) - (ds).begin())
// Ceil Function
#define ceil(num, div) ((num % div != 0) ? ((num / div) + 1) : (num / div))

const ll INF = 0x3f3f3f3f;              //inf
const ll neg_INF = 0xcfcfcfcf;          //-inf
const ld EPS = 1e-9;                    //epsilon
const ld PI = 3.1415926535897932384626; //pi

ll min(ll a,ll b) { if (a<b) return a; return b; }
ll max(ll a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
ll mod_pow(ll a,ll b, ll m) { 
    ll res=1;
    while(b>0){
        if(b&1){
            res=(res*a)%m;
        }
        a=(a*a)%m;
        b=b>>1;
    }
    return res;
}
ll mod_neg(ll a,ll b)
{
    ll ans=((a%b)+b)%b;
    return ans;
}
ll modinv(ll b, ll m){ return mod_pow(b,m-2,m); }
string to_upper(string a){ for(int i=0;i<(int)a.size();++i)if(a[i]>='a' && a[i]<='z')a[i]-='a'-'A';return a;}
string to_lower(string a){ for(int i=0;i<(int)a.size();++i)if(a[i]>='A' && a[i]<='Z')a[i]+='a'-'A';return a;}

const int MAXN = (5*(1E5))+2;
ll fact[MAXN], invFact[MAXN];

void precomputeFactorials(int n, ll mod) {
    fact[0] = 1;
    for (ll i = 1; i <= n; i++)
        fact[i] = (fact[i - 1] * i) % MOD;

    invFact[n] = mod_pow(fact[n], MOD - 2, MOD); 
    for (ll i = n - 1; i >= 0; i--)
        invFact[i] = (invFact[i + 1] * (i + 1)) % mod;
}

ll helper(ll in,ll s,vll&c,vvl &dp)
{
    if(in>=26)
    {
        if(s==0)return 1;
        return 0;
    }
    if(dp[in][s]!=-1)return dp[in][s];

    if(c[in]==0)
    {
        ll res=helper(in+1,s,c,dp)%MOD;
        return dp[in][s]=res;
    }
    
    ll op1=0;
    if(s>=c[in])op1=helper(in+1,s-c[in],c,dp); 
    ll op2=helper(in+1,s,c,dp);
    return dp[in][s]=((op1%MOD)+(op2%MOD))%MOD;
}

void solve()
{
    vll a(26,0);
    ll s=0;
    for(int i=0;i<26;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    ll s2=s/2;
    ll s1=s-s2;

    vvl dp(26,vll(s1+1,-1));
    ll ans=helper(0,s1,a,dp);

    precomputeFactorials(s+1,MOD);

    ll res=((((fact[s1]%MOD)*(fact[s2]%MOD))%MOD)*(ans%MOD))%MOD;
    for(int i=0;i<26;i++)
    {
        if(a[i]!=0)
        {
            res=((res%MOD)*(invFact[a[i]]%MOD))%MOD;
        }
    }
    cout<<res<<endl;
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
