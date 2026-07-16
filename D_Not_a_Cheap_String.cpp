#include <bits/stdc++.h>
using namespace std;

int sol(string s){
    int sum=0;
    for(auto i: s){
        sum+=i-'a'+1;
    }
    return sum;
}

void solve() {
    string s;
    cin>>s;

    int p;
    cin>>p;

    map<int, int> m;
    int n = s.length();
    for(int i=0; i<n; i++){
        m[i]=s[i]-'a'+1;
    }
    sort(m.begin(), m.end());

    while(sol(s)>p){
        
    }

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