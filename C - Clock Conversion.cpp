#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    string s;cin>>s;
    int hour=stoi(s.substr(0,2));
    int min=stoi(s.substr(3,2));
    if(hour==0)
    {
        cout<<"12"<<":"<<s[3]<<s[4]<<" AM"<<endl;
        
    }
    else if(hour==12)
    {
        cout<<s<<" PM"<<endl;
    }
    else if(hour>12)
    {
        hour-=12;
        string h=to_string(hour);
        if(h.size()==1)
        {
            h='0'+h;
        }
        cout<<h<<":"<<s[3]<<s[4]<<" PM"<<endl;
    }
    else
    {
        cout<<s<<" AM"<<endl;
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
