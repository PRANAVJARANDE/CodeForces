#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;cin>>s;
    int ss=s.size();
    int n;
    if(ss<2)
    {
        n=stoi(s);
    }
    else 
    {
        n=stoi(s.substr(ss-2,2));s
    }
    
    if(n==0)
    {
        cout<<"4"<<endl;
        return 0;
    }
    int u;
    n=n%100;
    if(n%4==0)
    {
        cout<<"4"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
        
        
    
    return 0;
}
