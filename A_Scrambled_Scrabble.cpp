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


ll n;

bool isvovel(char ch)
{
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')return 1;
    return 0;
}

//delet minimum
ll helper(ll in,ll val,string s)
{
    if(in>=n)
    {
        if(val==0)return 0;
        return INF;
    }
    if(val==1)
    {
        if(isvovel(s[in]) || s[in]=='Y')return helper(in+1,2,s);
        else return 1+helper(in+1,val,s);
    }
    else
    {
        //ntake
        ll op1=1+helper(in+1,val,s);
        //take
        ll op2=INF;
        if(!isvovel(s[in]))
        {
            ll nval=1;
            if(val==2)nval=0;
            op2=helper(in+1,nval,s);
        }
        ll op3=INF;
        if(in+1<n && s[in]=='N' && s[in+1]=='G')
        {
            ll nval=1;
            if(val==2)nval=0;
            op3=helper(in+2,nval,s);
        }
        return min(op1,min(op2,op3));
    }
}







void solve()
{
    string s;cin>>s;
    n=s.size();
    map<char,ll>m;

    for(auto x:s)m[x]++;
    ll cons=0,vov=0;
    for(auto x:m)
    {
        if(isvovel(x.first))vov+=x.second;
        else cons+=x.second;
    }
    cons-=m['Y'];
    ll yc=m['Y'];
    ll mini=min(m['N'],m['G']);
    cons-=2*mini;

    ll upr=0;

    while(vov>0 || yc>0)
    {
        if(mini+cons>=2 || mini)
        {
            if(mini>=2)
            {
                upr+=2;
                mini-=2;
                if(vov)vov--;
                else yc--;
            }
            else if(mini==1 && cons)
            {
                upr++;
                mini--;
                cons--;
                if(vov)vov--;
                else yc--;
            }
            else if(cons>=2)
            {
                cons-=2;
                if(vov)vov--;
                else yc--;
            }
            else if(mini)
            {
                mini--;
                if(vov)vov--;
                else yc--;
            }
        }
        else if(cons && vov>=1 && yc>=1)
        {
            cons--;
            yc--;
            vov--;
        }
        else if(cons && yc>=2)
        {
            cons--;
            yc-=2;
        }
        else if(vov>=1 && yc>=2)
        {
            yc-=2;
            vov--;
        }
        else if(yc>=3)
        {
            yc-=3;
        }
        else if(upr+cons>=2)
        {
            if(vov)
            {
                vov--;
                if(cons)
                {
                    cons--;
                    upr--;
                }
                else
                {
                    upr-=2;
                }
            }
            else
            {
                yc--;
                if(cons)
                {
                    cons--;
                    upr--;
                }
                else
                {
                    upr-=2;
                }
            }
        }
        else
        {
            break;
        }

    }
    ll ans=0;
    ans+=cons;
    ans+=vov;
    ans+=2*mini;
    ans+=yc;
    cout<<n-ans<<endl;
}


int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    solve();
    return 0;
}
