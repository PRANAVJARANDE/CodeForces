    #include <bits/stdc++.h>
    using namespace std;
    int main() 
    {
        int t;cin >> t;
        while (t--) 
        {
            string a;cin>>a;
            if(a=="abc" || a=="cba" || a=="bac" || a=="acb")
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
        return 0;
    }
