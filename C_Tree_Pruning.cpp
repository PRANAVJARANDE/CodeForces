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
#define MOD (int)(1e9 + 7)
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

ll dfss(ll in,ll lv,vector<vector<ll>>&adj,vll& par,vll& ext,map<ll,vll>&lvl,vll&dist)
{
    ll ta=0;
    lvl[lv].push_back(in);
    dist[in]=lv;
    for(auto x: adj[in])
    {
        if(x!=par[in])
        {
            par[x]=in;
            ta+=1+dfss(x,lv+1,adj,par,ext,lvl,dist);
        }
    }
    return ext[in]=ta;
}

void solve()
{
    ll n;cin>>n;
    vector<vector<ll>>a(n);
    vll indeg(n,0);
    for(int i=0;i<n-1;i++)
    {
        ll u,v;cin>>u>>v;
        u--;
        v--;
        a[u].push_back(v);
        a[v].push_back(u);
        indeg[u]++;
        indeg[v]++;
    }
    vll par(n+1,-1);
    vll ext(n+1,0);
    map<ll,vll>lvl;
    vll dist(n+1,0);
    
    dfss(0,0,a,par,ext,lvl,dist);

    priority_queue<pair<ll,ll>,vector<pair<ll,ll>> , greater<pair<ll,ll>>>q1;
    for(int i=1;i<n;i++)
    {
        if(indeg[i]==1)
        {
            q1.push({dist[i],i});
        }
    }
    ll ans=n-1;
    ll rm=0;
    
    for(int lv=0;lv<n;lv++)
    {
        ll s=0;
        for(auto x:lvl[lv])
        {
            s+=ext[x];
        }
        while(!q1.empty() && (q1.top().first)<lv)
        {
            ll k=q1.top().second;
            q1.pop();
            indeg[par[k]]--;
            rm++;
            if(indeg[par[k]]==1 && par[k]!=0)
            {
                q1.push({dist[par[k]],par[k]});
            }
        }
        ans=min(ans,s+rm);
    }  
    cout<<ans<<endl;
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
