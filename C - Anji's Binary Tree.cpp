#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

string s;
ll helper(int in,vector<vector<int>>&arr)
{
    if(arr[in][0]==-1 && arr[in][1]==-1)
    {
        return 0;
    }
   
    ll op1=1e9,op2=1e9;
    if(arr[in][0]!=-1) op1=helper(arr[in][0],arr);
    if(s[in]!='L')op1++;

    if(arr[in][1]!=-1) op2=helper(arr[in][1],arr);
    if(s[in]!='R')op2++;
    
    return min(op1,op2);
}

void solve()
{
    int n;cin>>n;
    cin>>s;
    vector<vector<int>>arr;
    for(int i=0;i<n;i++)
    {
        int a,b;cin>>a>>b;
        arr.push_back({a-1,b-1});
    }
    
    cout<<helper(0,arr)<<endl;
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
