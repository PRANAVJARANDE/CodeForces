#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    int n;cin>>n;
    
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<26;j++)
        {
            for(int k=0;k<26;k++)
            {
                if(i+j+k+3==n)
                {
                    char ch1='a'+i;
                    char ch2='a'+j;
                    char ch3='a'+k;
                    cout<<ch1<<ch2<<ch3<<endl;
                    return;
                }
            }
        }
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
