#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin>>n>>k;

    string s;
    cin>>s;

    map<int,int> m,M;

    for(int i=0; i<s.length(); i++){
        if(s[i]-'a'>=0 && s[i]-'a'<=25){
            m[s[i]-'a']++;
        }
        else{
            M[s[i]-'A']++;
        }
    }
    
    int num=0;
    for(int i=0; i<26; i++){
        int mo = min(m[i],M[i]);
        num+=mo;
        m[i]-=mo;
        M[i]-=mo;
    }
    for(int i=0; i<26; i++){
        if(k==0) break;
        int a = min(k, max(m[i],M[i])/2);
        num+=a;
        k-= a;
    }

    cout<<num<<endl;
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