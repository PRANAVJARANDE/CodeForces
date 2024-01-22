#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<int>a(n);
    vector<int> freq(10);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        freq[a[i]%10]++;
    }
    vector<int> res;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<min(3,freq[i]);j++)
        {
            res.push_back(i);
        }
    }
    
    for(int i=0;i<res.size();i++)
    {
        for(int j=i+1;j<res.size();j++)
        {
            for(int k=j+1;k<res.size();k++)
            {
                if((res[i]+res[j]+res[k])%10==3)
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"NO"<<endl;


    
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
