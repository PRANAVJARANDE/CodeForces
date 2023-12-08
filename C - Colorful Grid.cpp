#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n,m,k;cin>>n>>m>>k;
    int mini=n+m-2;
    if(k<mini || (k-mini)%2==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    vector<vector<char>> hor(n,vector<char>(m-1,'R'));
    vector<vector<char>> ver(n-1,vector<char>(m,'R'));
    for(int i=0;i<m-1;i++)
    {
        if(i%2)hor[0][i]='B';
        else hor[0][i]='R';
    }
    hor[1][0]='R';
    
    if(m%2)
    {
        for(int i=0;i<n-1;i++)
        {
            if(i%2) ver[i][m-1]='B';
            else ver[i][m-1]='R';
        }
    }
    else
    {
        for(int i=0;i<n-1;i++)
        {
            if(i%2) ver[i][m-1]='R';
            else ver[i][m-1]='B';
        }
    }

    ver[0][0]='B';
    ver[0][1]='B';
    if(ver[n-2][m-1]=='R')ver[n-2][m-2]='B';
    else ver[n-2][m-2]='R';

    hor[n-2][m-2] = ver[n-2][m-1];
	hor[n-1][m-2] = ver[n-2][m-1];

    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            cout<<hor[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ver[i][j]<<" ";
        }
        cout<<endl;
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
