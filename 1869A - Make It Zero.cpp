#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long t;cin >> t;
    while (t--) 
    {
        int n;cin>>n;
        vector<int>v1(n);
        for(int i=0;i<n;i++)
            cin>>v1[i];

        if(n%2==0)
        {
            cout<<"2"<<endl;
            cout<<"1 "<<n<<endl;
            cout<<"1 "<<n<<endl;
        }
        else 
        {
           cout<<"4"<<endl;
           cout<<"1 "<<n-1<<endl;
           cout<<"1 "<<n-1<<endl;
           cout<<n-1<<" "<<n<<endl;
           cout<<n-1<<" "<<n<<endl;
        }
        
    }
    return 0;
}
