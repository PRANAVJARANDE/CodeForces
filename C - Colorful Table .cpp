#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        int n,k;cin>>n>>k;
        vector<int>v1(n);
        vector<vector<int>> fre(k+1);
        set<int> s1;
        for(int i=1;i<=n;i++)
        {
            s1.insert(i);
        }
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
            fre[v1[i]].push_back(i+1);
        }

        for(int i=1;i<=k;i++)
        {
            if(fre[i].size()==0 || s1.size()==0)
            {
                cout<<"0 ";
            }
            else
            {
                int st=*s1.begin(),en=*s1.rbegin();
                cout<<2*(en-st+1)<<" ";
                for(int x:fre[i])
                {
                    s1.erase(x);
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
