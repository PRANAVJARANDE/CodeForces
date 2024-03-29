#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
vector<int> a={11,101,111,1001,1011,1101,1111,10001,10011,10101,10111,11001,11011,11101,11111};
 
bool solve(int n)
{
    while(n%10==0)
    {
        n/=10;
    }
    if(n==1 || n==0)
    {
        return 1;
    }
    for(int x: a)
    {
        if(n%x==0)
        {
            n/=x;
            return solve(n);
        }
    }
    return 0;
}
 
int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    reverse(a.begin(),a.end());
    while (t--) 
    {
        int n;cin>>n;
        if(solve(n))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
