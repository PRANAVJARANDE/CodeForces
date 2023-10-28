#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    string s;cin>>s;

    if(n%2)
    {
        cout<<"-1"<<endl;
        return;
    }

    vector<int> tp;
    deque<int> q1;
    for(int i=0;i<n;i++)
    {
        q1.push_back(s[i]-'0');
    }

    int k=0,in=0;
    while(!q1.empty() && k<=300)
    {
        if(q1.front() != q1.back())
        {
            q1.pop_back();
            q1.pop_front();
        }
        else
        {
            if(q1.front()==1)
            {
                tp.push_back(in);
                q1.push_front(1);
                q1.pop_back();
            }
            else
            {
                tp.push_back(n+2*k-in);
                q1.push_back(0);
                q1.pop_front();
            }
            k++;
        }
        in++;
    }

    if(k<=300)
    {
        cout<<(int)tp.size()<<endl;
        for(int x: tp)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
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
