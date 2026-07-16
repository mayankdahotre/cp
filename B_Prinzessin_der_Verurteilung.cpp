#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    vector<int> v(26,0);

    for(int i=0; i<n; i++) v[s[i]-'a']++;

    string ans;
    bool f=false;
    for(int i=0; i<26; i++){
        if(v[i]==0){
            ans='a'+i;
            f=true;
            break;
        }
    }

    if(f){
        cout<<ans<<endl;
        return;
    }
    
    bool f1=false;
    for(int i=0; i<26; i++){
        bool f = false;
        for(int j=0; j<26; j++){
            string t;
            t+=('a'+i);
            t+=('a'+j);
            if(s.find(t)==string::npos){
                ans=t;
                f=true;
                f1 = true;
                break;
            }
        }
        if(f) break;
    }

    if(f1){
        cout<<ans<<endl;
        return;
    }


    for(int k=0; k<26; k++){
        bool f1 = false;
        for(int i=0; i<26; i++){
            bool f2 = false;
            for(int j=0; j<26; j++){
                string t;
                t+=('a'+k);
                t+=('a'+i);
                t+=('a'+j);
                if(s.find(t)==string::npos){
                    ans=t;
                    f1=true;
                    f2=true;
                    break;
                }
            }
            if(f2) break;
        }
        if(f1)break;
    }

    cout<<ans<<endl;
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