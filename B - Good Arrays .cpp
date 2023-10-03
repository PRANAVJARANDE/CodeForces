#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;

    int t;cin >> t;
    while (t--) 
    {
        int n;cin>>n;
        int cnt=0;
        long long s=0;
        for(int i=0;i<n;i++)
        {
            int j;cin>>j;
            if(j>1)
            {
                s+=j;
            }
        }
        if(n==1 || s<n)
        {
            cout<<"NO"<<endl;
        }       
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
