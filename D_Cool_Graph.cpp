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

void solve()
{
    ll n,m;cin>>n>>m;
    vector<set<ll>>adj(n);
    for(int i=0;i<m;i++)
    {
        ll u,v;cin>>u>>v;
        u--;
        v--;
        adj[u].insert(v);
        adj[v].insert(u);
    }

    vvl ans;
    for(int i=0;i<n;i++)
    {
        while(adj[i].size()>=2)
        {
            ll i1=*adj[i].begin();
            adj[i].erase(adj[i].begin());
            ll i2=*adj[i].begin();
            adj[i].erase(adj[i].begin());
            ans.push_back({i,i1,i2});
            adj[i1].erase(i);
            adj[i2].erase(i);
            if(adj[i1].find(i2)!=adj[i1].end())
            {
                //remove it 
                adj[i1].erase(i2);
                adj[i2].erase(i1);
            }
            else
            {
                //add it
                adj[i1].insert(i2);
                adj[i2].insert(i1);
            }
        }
    }
    vll r1;
    vector<pair<ll,ll>>r2;
    for(int i=0;i<n;i++)
    {
        if(adj[i].size()==0)r1.push_back(i);
        else
        {
            ll val1=i,val2=*adj[i].begin();
            if(val1<val2)r2.push_back({val1,val2});
        }
    }
    //connect all
    if(r2.size()!=0)
    {
        ll n1=r2.back().first;
        ll n2=r2.back().second;
        r2.pop_back();

        for(auto x:r1)
        {
            ans.push_back({n1,n2,x});
            n2=x;
        }
        for(auto x:r2)
        {
            ans.push_back({n1,x.first,x.second});
            n1=x.first;
        }
    }

    //print
    cout<<(ll)ans.size()<<endl;
    for(auto x:ans)
    {
        cout<<x[0]+1<<" "<<x[1]+1<<" "<<x[2]+1<<endl;
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
