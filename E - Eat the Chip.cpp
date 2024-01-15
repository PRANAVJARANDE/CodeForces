#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll h,w,xa,ya,xb,yb;cin>>h>>w>>xa>>ya>>xb>>yb;
    if(xa>=xb)
    {
        cout<<"DRAW"<<endl;
        return;
    }
    int xd=xb-xa-1;
    if(xd%2==0)
    {
        //ALICE OR DRAW
        if(ya==yb || abs(ya-yb)==1)
        {
            cout<<"ALICE"<<endl;
        }
        else if(ya>yb)
        {
            ya--;
            xd--;
            ll sfd=yb-1;
            ll yd=ya-yb-1;
            xd-=2*sfd;
            xd-=2*yd;
            if(xd>=0)
            {
                cout<<"ALICE"<<endl;
            }
            else
            {
                cout<<"DRAW"<<endl;
            }
        }
        else
        {
            ya++;
            xd--;
            ll sfd=w-yb;
            ll yd=yb-ya-1;
            xd-=2*sfd;
            xd-=2*yd;
            if(xd>=0)
            {
                cout<<"ALICE"<<endl;
            }
            else
            {
                cout<<"DRAW"<<endl;
            }
        }
        
    }
    else
    {
        //BOB OR DRAW
        if(ya==yb)
        {
            cout<<"BOB"<<endl;
            return;
        }
        else if(ya>yb)
        {
            ll sfd=w-ya;
            ll yd=ya-yb-1;
            xd-=2*sfd;
            xd-=2*yd;
            if(xd>=0)
            {
                cout<<"BOB"<<endl;
            }
            else
            {
                cout<<"DRAW"<<endl;
            }
        }
        else
        {
            ll sfd=ya-1;
            ll yd=yb-ya-1;
            xd-=2*sfd;
            xd-=2*yd;
            if(xd>=0)
            {
                cout<<"BOB"<<endl;
            }
            else
            {
                cout<<"DRAW"<<endl;
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
