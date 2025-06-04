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

ll n,m;
map<char,char>opp;
pair<string,pair<ll,ll>> findnext(ll i,ll j,string s)
{
    string nx=s;
    ll ni,nj;
    if(s[0]=='D')
    {
        if(s[1]=='L')
        {
            ll x1=n,y1=j-n+i;
            if(y1>=1)
            {
                nx[0]='U';
                ni=x1;
                nj=y1;
            }
            ll x2=i+j-1,y2=1;
            if(x2<=n)
            {
                nx[1]='R';
                ni=x2;
                nj=y2;
            }
        }
        else
        {
            ll x1=n,y1=j+n-i;
            if(y1<=m)
            {
                nx[0]='U';
                ni=x1;
                nj=y1;
            }
            ll x2=i+m-j,y2=m;
            if(x2<=n)
            {
                nx[1]='L';
                ni=x2;
                nj=y2;
            }
        }
    }
    else
    {
        if(s[1]=='L')
        {
            ll x1=1,y1=j-i+1;
            if(y1>=1)
            {
                nx[0]='D';
                ni=x1;
                nj=y1;
            }
            ll x2=i-j+1,y2=1;
            if(x2>=1)
            {
                nx[1]='R';
                ni=x2;
                nj=y2;
            }
        }
        else
        {
            ll x1=1,y1=j+i-1;
            if(y1<=m)
            {
                nx[0]='D';
                ni=x1;
                nj=y1;
            }
            ll x2=i-m+j,y2=m;
            if(x2>=1)
            {
                nx[1]='L';
                ni=x2;
                nj=y2;
            }
        }
    }
    return {nx,{ni,nj}};
}

bool check(ll x,ll y,ll i2,ll j2,string s)
{
    ll xa=0,ya=0;
    if(s[0]=='U')xa--;
    else xa++;
    if(s[1]=='L')ya--;
    else ya++;

    while(x<=n && y<=m && x>=1 && y>=1)
    {
        if(x==i2 && y==j2)return 1;
        x+=xa;
        y+=ya;
    }
    return 0;
}


void solve()
{
    string s;
    ll x,y,i2,j2;cin>>n>>m>>x>>y>>i2>>j2>>s;

    if(check(x,y,i2,j2,s))
    {
        cout<<"0"<<endl;
        return;
    }

    map<string,map<ll,map<ll,ll>>>target;

    auto f1=findnext(i2,j2,"UL");
    auto f2=findnext(i2,j2,"UR");
    auto f3=findnext(i2,j2,"DL");
    auto f4=findnext(i2,j2,"DR");

    target["DR"][f1.second.first][f1.second.second]=1;
    target["DL"][f2.second.first][f2.second.second]=1;
    target["UR"][f3.second.first][f3.second.second]=1;
    target["UL"][f4.second.first][f4.second.second]=1;


    map<string,map<ll,map<ll,ll>>>vis;
    ll ans=0;
    while(vis[s][x][y]==0)
    {
        vis[s][x][y]=1;
        auto nx=findnext(x,y,s);
        ans++;
        s=nx.first;
        x=nx.second.first;
        y=nx.second.second;
        if(target[s][x][y]==1)
        {
            cout<<ans<<endl;
            return;
        }
    }
    cout<<"-1"<<endl;
}


int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    opp['D']='U';
    opp['U']='D';
    opp['L']='R';
    opp['R']='L';
    int t;cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}
