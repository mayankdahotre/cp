#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    vector<int> freq(26,0);
    for(auto c: s){
        freq[c-'a']++;
    }

    int num=0;
    for(int i=0; i<26; i++){
        if(freq[i]%2) num++;
    }

    if((num<=k+1)){
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


