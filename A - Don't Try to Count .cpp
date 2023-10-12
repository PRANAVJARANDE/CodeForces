    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
     
        int t;
        cin >> t;
        while (t--) {
            int n, m;
            cin >> n >> m;
            string x, s;
            cin >> x >> s;
     
            if (x.find(s) != string::npos) 
            {
                cout << "0" << endl;
            } 
            else if (n >= m) 
            {
                x = x + x;
                
                if (x.find(s) != string::npos) {
                    cout << "1" << endl;
                } else {
                    cout << "-1" << endl;
                }
            } else {
                int c = 0;
                while (x.size() < m) {
                    x = x + x;
                    c++;
                }
                
                if (x.find(s) != string::npos) {
                    cout << c << endl;
                } else {
                    x = x + x;
                    c++;
                    
                    if (x.find(s) != string::npos) {
                        cout << c << endl;
                    } else {
                        cout << "-1" << endl;
                    }
                }
            }
        }
        return 0;
    }
