#include <bits/stdc++.h>
using namespace std;
#define MOD (int)998244353

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        string s;cin>>s;
        long long a1=0,a2=1;
        for(int i=0;i<s.size()-1;i++)
        {
            int k=0;
            while(s[i]==s[i+1])
            {
                k++;
                i++;
            }
            a1+=k;
            a2=(a2*(k+1))%MOD;
        }
        int n = a1 % MOD;
        while (n--) 
        {
            a2 =(a2 * (n + 1)) % MOD;
        }
        cout<<a1<<" "<<a2<<endl;
    }
    return 0;
}
