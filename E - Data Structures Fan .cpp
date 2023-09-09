#include <bits/stdc++.h>
using namespace std;


int main() 
{
    long long t;cin >> t;
    while (t--) 
    {
        int n;cin>>n;
        vector<int> v1(n+1,0),prexor(n+1,0);
        for(int i=1;i<=n;i++)
            cin>>v1[i];
        
        string s;cin>>s;
        s='0'+s;
        int a1=0,a0=0;
        for(int i=1;i<=n;i++)
        {
            if(s[i]=='0')
                a0=a0^v1[i];
            else
                a1=a1^v1[i];

            prexor[i]=prexor[i-1]^v1[i];
        }
        int q;cin>>q;
        int temp=0;
        while(q--)
        {
            int tp;cin>>tp;
            if(tp==1)
            {
                int l,r;cin>>l>>r;
                temp^=prexor[r]^prexor[l-1];
            }
            else 
            {
                int g;cin>>g;
                int an;
                if(g==1)
                {
                    an=a1^temp;
                }
                else 
                {
                    an=a0^temp;
                }
                cout<<an<<" ";
            }
        }
        cout<<endl;
        
    }
    return 0;
}
