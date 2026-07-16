#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    vector<int> b;
    set<int> st;
    for(int i=0; i<n; i++) st.insert(v[i]);
    for(auto i: st) b.push_back(i);

    int n2 = b.size();

    int num=1;
    for(int i=1; i<n-1; i++){
        if(v[i+1]-v[i]>1) num++;
        else if(v[i+2]-v[i]>1 && i<n-1){
            i++;
            num++;
        }
    }
    if(v[1]-v[0]>1) num++;

    if(b.size()==1) num=1;

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