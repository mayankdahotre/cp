#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int sum1=0, sum2=0, cnt1=0, cnt2=0;
    for(int i=0; i<n; i++){
        if(i%2){
            sum2+=v[i];
            cnt2++;
        }
        else{
            sum1+=v[i];
            cnt1++;
        }
    }

    if(sum1/cnt1 == sum2/cnt2){
        if(sum1%cnt1==0 && sum2%cnt2==0){
            cout<<"YES"<<endl;
            return;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
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