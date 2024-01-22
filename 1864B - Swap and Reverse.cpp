#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n,k;cin>>n>>k;
    string s;cin>>s;

    if(k%2==0)
    {
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
    else
    {
        string a="",b="";
        for(int i=0;i<n;i++)
        {
            if(i%2==0) a=a+s[i];
            else b=b+s[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        int i1=0,i2=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)s[i]=a[i1++];
            else s[i]=b[i2++];
        }
        cout<<s<<endl;
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
