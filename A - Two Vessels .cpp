#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long t;cin >> t;
    while (t--) 
    {
        int a,b,c;cin>>a>>b>>c;
        int y=abs(a-b);
        int z=c*2;
        int op1=ceil((double)y/(double)z);
        cout<<op1<<endl;
    }
    return 0;
}
