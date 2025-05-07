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

void solve()
{
    ll negINF=1e17;
    negINF=-negINF;

    ll n,k;cin>>n>>k;
    string s;cin>>s;
    ll tc=-1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            tc=i;
            break;
        }
    }
    vll a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll sum=0;
    ll maxsum=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            sum+=a[i];
            if(sum<0)sum=0;
            maxsum=max(maxsum,sum);
        }
        else
        {
            sum=0;
        }
    }
    if(maxsum>k)
    {
        cout<<"No"<<endl;
        return;
    }

    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')a[i]=negINF;
    }
    if(maxsum==k)
    {
        cout<<"Yes"<<endl;
        for(auto x:a)
            cout<<x<<" ";
        
        cout<<endl;
        return;
    }
    if(tc==-1)
    {
        cout<<"No"<<endl;
        return;
    }
    
    ll rmaxi=0;
    ll lmaxi=0;
    ll rsum=0;
    ll lsum=0;
    for(int i=tc+1;i<n;i++)
    {
        if(s[i]=='0')break;
        rsum+=a[i];
        rmaxi=max(rmaxi,rsum);
    }

    for(int i=tc-1;i>=0;i--)
    {
        if(s[i]=='0')break;
        lsum+=a[i];
        lmaxi=max(lmaxi,lsum);
    }
    a[tc]=k-(lmaxi+rmaxi);
    cout<<"Yes"<<endl;
    for(auto x:a)
        cout<<x<<" ";

    cout<<endl;
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
