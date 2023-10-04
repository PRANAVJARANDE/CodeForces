#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        int n,m,k;
        cin>>n>>m>>k;
        int x,y;
        cin>>x>>y;
        vector<vector<int>>v1(k);
        bool bb=0;
        for(int i=0;i<k;i++)
        {
            int a,b;cin>>a>>b;
            int dist=(abs(a-x)+abs(b-y));
            if(dist%2==0)
            {
                bb=1;
            }
                
        }
        if(bb==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
