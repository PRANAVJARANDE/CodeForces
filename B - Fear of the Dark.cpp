#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        int px,py;cin>>px>>py;
        int ax,ay;cin>>ax>>ay;
        int bx,by;cin>>bx>>by;
        double a=sqrt((ax*ax+ay*ay));
        double b=sqrt((bx*bx+by*by));
        double c=sqrt((ax-px)*(ax-px)+(ay-py)*(ay-py));
        double d=sqrt((bx-px)*(bx-px)+(by-py)*(by-py));
        double r=sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay))/2.0;
        double ans=min(min(max(a,c),max(b,d)),min(max(r,max(a,d)),max(r,max(b,c))));
        printf("%.7lf\n",ans);      
    }
    return 0;
}
