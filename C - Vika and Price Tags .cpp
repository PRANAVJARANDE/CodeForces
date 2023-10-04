#include <bits/stdc++.h>
using namespace std;

int helper(int a,int b)
{
    if(a==0 )
        return 0;
    
    if(b==0)
        return 1;
    
    if(a >= 2*b)
    {
        int gh=a/(2*b);
        return 3*gh+helper(a-2*b*gh,b);
    }
    return 1+helper(b,abs(a-b));
}

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;

    int t;cin >> t;
    while (t--) 
    {
        int n;cin>>n;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<n;i++)
            cin>>b[i];

        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            if (a[i] == 0 && b[i] == 0) 
            {
                continue;
            }
            m[helper(a[i],b[i])%3]++;
        }
        if(m.size()<=1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
