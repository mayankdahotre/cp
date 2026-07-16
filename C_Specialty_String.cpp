#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    if(n%2){
        cout<<"NO"<<endl;
        return;
    }

    stack<char> s;
    for(auto c: s){
        if(!s.empty() && s.top()==c) s.pop();
        s.push(c);
    }

    if(s.empty()){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
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