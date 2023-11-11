#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        int n,m;cin>>n>>m;
        vector<int>a(n),b(m),ans;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int j=0;j<m;j++)cin>>b[j];

        int i=0,j=0;
        sort(b.begin(),b.end(),greater<int>());
        while(i<n && j<m)
        {
            if(a[i]>b[j])
            {
                ans.push_back(a[i]);
                i++;
            }
            else
            {
                ans.push_back(b[j]);
                j++;
            }
        }
        while(i<n)
        {
            ans.push_back(a[i]);
            i++;
        }
        while(j<m)
        {
            ans.push_back(b[j]);
            j++;
        }

        for(int x: ans)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
