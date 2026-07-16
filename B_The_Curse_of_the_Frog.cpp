#include <bits/stdc++.h>
using namespace std;

#define int long long

bool cmp(pair<int,pair<int,int>> a, pair<int, pair<int,int>> b){
    if(a.first==b.first && a.second.first==b.second.first) return a.second.second<b.second.second; 
    if(a.first==b.first) return a.second.first>b.second.first;
    return a.first>b.first;
}

void solve() {
    int n,x;
    cin>>n>>x;

    vector<pair<int, pair<int, int>>> vpp(n);
    for(int i=0; i<n; i++) cin>>vpp[i].first>>vpp[i].second.first>>vpp[i].second.second;

    sort(vpp.begin(), vpp.end(), cmp);

    int sum=0;
    int ans=0;
    while(sum<x){
        for(int i=0; i<n; i++){
            int a = vpp[i].first;
            int b = vpp[i].second.first;
            int c = vpp[i].second.second;

            sum+=a*(b-1);
            if(sum>=x){
                cout<<0<<endl;
                return;
            }
        }
        
        bool next = false;
        for(int i=0; i<n; i++){
            int a = vpp[i].first;
            int b = vpp[i].second.first;
            int c = vpp[i].second.second;

            if(a-c<0){
                next = true;
                break;
            }
            sum+=a-c;
            ans++;
        }

        if(next) continue;
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