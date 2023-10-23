    #include <bits/stdc++.h>
    using namespace std;
     
    int main() 
    {
        ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
        int q;cin >> q;
        multiset<int> l,r;
        bool b=0;
        while (q--) 
        {
            char ch;int a,b;
            cin>>ch>>a>>b;
            if(ch=='+')
            {
                l.insert(a);
                r.insert(b);
            }
            else
            {
                l.erase(l.find(a));
                r.erase(r.find(b));
            }
     
            if(!l.empty())
            {
                int maxstart=*l.rbegin();
                int miniend=*r.begin();
                if(maxstart>miniend)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }   
            else
            {
                cout<<"NO"<<endl;
            }    
        }
        return 0;
    }
