#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    sort(a.begin(), a.end());

    
    int i=0, j=n-1;

    int cnt = 0;
    while(i<=j){
        if(a[i]+a[j]<=k){
            i++;
            j--;
            cnt++;
        }
        else{
            j--;
            cnt++;
        }
    }

    cout<<cnt<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}