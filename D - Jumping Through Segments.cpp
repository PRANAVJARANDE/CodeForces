#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long


bool check(int k,vector<vector<int>>&arr,int n)
{
    int cl=0,cr=0;
    for(int i=0;i<n;i++)
    {
        cl-=k;
        cr+=k;
        cl=max(cl,arr[i][0]);
        cr=min(cr,arr[i][1]);

        if(cl>cr)return 0;
    }
    return 1;
}

void solve()
{
    int n;cin>>n;
    vector<vector<int>> arr;
    for(int i=0;i<n;i++)
    {
        int l,r;cin>>l>>r;
        arr.push_back({l,r});
    }

    ll l=0,r=INT_MAX;
    ll ans=0;
    while(l<=r)
    {
        ll mid=l+(r-l)/2;
        if(check(mid,arr,n))
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
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
