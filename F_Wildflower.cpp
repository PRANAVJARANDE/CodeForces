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

//Interactive problem
ll ask(int i,int j)
{
    cout<<"? "<<i<<" "<<j<<endl;
    cout.flush();
    ll res;cin>>res;
    return res;
}

ll cntlf(ll in,ll par,vvl&adj)
{
    if(in!=0 && adj[in].size()==1)return 1;
    ll res=0;
    for(auto x:adj[in])
    {
        if(x!=par)
        {
            res+=cntlf(x,in,adj);
        }
    }
    return res;
}

ll kpar;
ll helper(ll in,ll par,vvl&adj)
{
    ll cnt=0;
    if(adj[0].size()>=2 || adj[in].size()>=3)
    {
        kpar=par;
        return 1;
    }
    for(auto x:adj[in])
    {
        if(x!=par)
        {
            cnt+=1+helper(x,in,adj);
        }
    }
    return cnt;
}

ll h1,h2;
ll ghh(ll in,ll par,vvl&adj)
{
    ll res=1;
    for(auto x:adj[in])
    {
        if(x!=par)
        {
            res+=ghh(x,in,adj);
        }
    }
    return res;
}


void calh(ll in,ll par,vvl&adj)
{   
    for(auto x:adj[in])
    {
        if(x!=par)
        {
            if(h1==-1)h1=ghh(x,in,adj);
            else if(h2==-1)h2=ghh(x,in,adj);
        }
    }
}

void solve()
{
    ll n;cin>>n;
    vvl adj(n);
    for(int i=0;i<n-1;i++)
    {
        ll u,v;cin>>u>>v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    ll leaves=cntlf(0,-1,adj);
    if(leaves>=3)
    {
        cout<<"0"<<endl;
        return;
    }
    if(leaves==1)
    {
        ll res=mod_pow(2,n,MOD);
        cout<<res<<endl;
        return;
    }
    ll cnt=helper(0,-1,adj);

    ll in=0;
    for(int i=1;i<n;i++)
    {
        if(adj[i].size()==3)in=i;
    }
    h1=-1;
    h2=-1;
    calh(in,kpar,adj);
    if(h1==h2)
    {
        ll ans=mod_pow(2,cnt+1,MOD);
        cout<<ans<<endl;
        return;
    }
    ll ans=mod_pow(2,cnt,MOD);
    ll res1=mod_pow(2,abs(h1-h2),MOD);
    ll res2=mod_pow(2,abs(h1-h2) - 1 ,MOD);
    ll tm=((res1%MOD)+(res2%MOD))%MOD;
    ans=((ans%MOD)*(tm%MOD))%MOD;
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
