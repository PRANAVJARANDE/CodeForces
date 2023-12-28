#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    vector<vector<char>> v1(3,vector<char>(3));
    int in=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>v1[i][j];
            if(v1[i][j]=='?')
            {
                in=i;
            }
        }
    }
 
    unordered_set<char> s1;
    for(int i=0;i<3;i++)
    {
        if(v1[in][i]!='?')
        {
            s1.insert(v1[in][i]);
        }
    }
 
    if(s1.find('A')==s1.end())
    {
        cout<<"A"<<endl;
    }
    else if(s1.find('B')==s1.end())
    {
        cout<<"B"<<endl;
    }
    else if(s1.find('C')==s1.end())
    {
        cout<<"C"<<endl;
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
