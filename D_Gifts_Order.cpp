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

void build(int node,int i,int j,vll&a,vvl&tree)
{
    if(i==j)
    {
        tree[node][0]=0;
        tree[node][1]=a[i]-i;    //mn[v][0]
        tree[node][2]=a[i]-i;    //mx[v][0]
        tree[node][3]=a[i]+i;    //mn[v][1]
        tree[node][4]=a[i]+i;    //mx[v][1]
        return;
    }
    ll mid=(i+j)/2;
    build(2*node+1,i,mid,a,tree);
    build(2*node+2,mid+1,j,a,tree);
    

    ll ans=max(tree[2*node+1][0],tree[2*node+2][0]);
    ll op1=-tree[2*node+1][1]+tree[2*node+2][2];
    ll op2=tree[2*node+1][4]-tree[2*node+2][3];
    tree[node][0]=max(ans,max(op1,op2));
    tree[node][1]=min(tree[2*node+1][1],tree[2*node+2][1]);
    tree[node][2]=max(tree[2*node+1][2],tree[2*node+2][2]);
    tree[node][3]=min(tree[2*node+1][3],tree[2*node+2][3]);
    tree[node][4]=max(tree[2*node+1][4],tree[2*node+2][4]);
}


void update(int node,int i,int j,vvl&tree,int in,ll val)
{
    if(i==j)
    {
        tree[node][0]=0;
        tree[node][1]=val-in;
        tree[node][2]=val-in;
        tree[node][3]=val+in;
        tree[node][4]=val+in;
        return;
    }

    ll mid=(i+j)/2;
    if(in<=mid)
    {
        update(2*node+1,i,mid,tree,in,val);
    }
    else
    {
        update(2*node+2,mid+1,j,tree,in,val);
    }
    
    ll ans=max(tree[2*node+1][0],tree[2*node+2][0]);
    ll op1=-tree[2*node+1][1]+tree[2*node+2][2];
    ll op2=tree[2*node+1][4]-tree[2*node+2][3];
    tree[node][0]=max(ans,max(op1,op2));
    tree[node][1]=min(tree[2*node+1][1],tree[2*node+2][1]);
    tree[node][2]=max(tree[2*node+1][2],tree[2*node+2][2]);
    tree[node][3]=min(tree[2*node+1][3],tree[2*node+2][3]);
    tree[node][4]=max(tree[2*node+1][4],tree[2*node+2][4]);
}

void solve()
{
    ll n,q;cin>>n>>q;
    vll a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    vvl tree(4*n,vll(5,0));
    build(0,0,n-1,a,tree);
    cout<<tree[0][0]<<endl;
    while(q--)
    {
        ll in,p;cin>>in>>p;
        in--;
        update(0,0,n-1,tree,in,p);
        cout<<tree[0][0]<<endl;
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
