#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long t;cin >> t;
    while (t--) 
    {
        int n,m;cin>>n>>m;
        vector<string>v1;
        for(int i=0;i<n;i++)
        {
            string s="";
            for(int j=0;j<m;j++)
            {
                char ch;cin>>ch;
                s=s+ch;
            }
            v1.push_back(s);
        }
        
        string s="vika";
        int in=0;
        bool b=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s[in]==v1[j][i])
                {
                    in++;
                    break;
                }
            }
            if(in==4)
            {
                cout<<"YES"<<endl;
                b=1;
                break;
            }
        }
        if(b==0)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
