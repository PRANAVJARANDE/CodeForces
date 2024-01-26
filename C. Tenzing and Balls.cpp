#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

int bs(vector<int>& arr, int target) 
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) 
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; 
}

int helper(int in,int n,map<int,vector<int>>&m,vector<int>&dp,vector<int>&a)
{
    if(in>=n)
        return 0;

    if(dp[in]!=-1)
        return dp[in];
    
    int k=bs(m[a[in]],in);
    k++;

    int ans=helper(in+1,n,m,dp,a);
    
    if(k!=m[a[in]].size())
        ans=max(ans,m[a[in]][k]-in+1+helper(m[a[in]][k]+1,n,m,dp,a));
    
    return dp[in]=ans;
}

void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    map<int,vector<int>> m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]].push_back(i);
    }
    vector<int>dp(n,-1);
    cout<<helper(0,n,m,dp,a)<<endl; 
}


int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
        solve();
    return 0;
}
