#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    int o=0;
    for(int i=0; i<n; i++) if(s[i]-'0'==1) o++;

    int z = n-o;

    if(z%2==1){
        if(o%2==0){
            if(o<z){
                if(!o){
                    cout<<0<<endl;
                    return;
                }

                cout<<o<<endl;
                for(int i=0; i<n; i++) if(s[i]=='1') cout<<i+1<<" ";
                cout<<endl;
            }
            else{
                cout<<z<<endl;
                for(int i=0; i<n; i++) if(s[i]=='0') cout<<i+1<<" ";
                cout<<endl;
            }
        }
        else{
            cout<<z<<endl;
            for(int i=0; i<n; i++) if(s[i]=='0') cout<<i+1<<" ";
            cout<<endl;
        }
    }
    else{
        if(!o){
            cout<<0<<endl;
            return;
        }
        
        if(o%2==0){
            cout<<o<<endl;
            for(int i=0; i<n; i++) if(s[i]=='1') cout<<i+1<<" ";
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}