#include <bits/stdc++.h>
using namespace std;

long long  sap(long long  a, long long  d, long long n) 
{
    long long sum = n * (2 * a + (n - 1) * d) / 2;
    return sum;
}

long long lcm(long long a, long long b) 
{
    return abs(a * b) / __gcd(a,b);
}

int main() 
{
    long long t;cin >> t;
    while (t--) 
    {
        long long  n,x,y;cin>>n>>x>>y;
        long long  t1=n/x,t2=n/y,lc=lcm(x,y),ct=n/lc;
        t1=t1-ct;
        t2=t2-ct;
        long long res=sap(n,-1,t1)-sap(1,1,t2);
        cout<<res<<endl;
    }
    return 0;
}
