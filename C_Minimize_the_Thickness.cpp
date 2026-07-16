#include <bits/stdc++.h>
using namespace std;

#define int long long

int si(vector<int> &v, int l, int r){
    int sum = 0;
    for(int i=l; i<=r; i++){
        sum+=v[i];
    }
    return sum;
}

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    vector<int> sums;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=j; k<n; k++){
                if(si(v,i,j)==si(v,j+1,k)){
                    sums.push_back(si(v,i,j));
                }
            }
        }
    }

    int minlen = LLONG_MAX;
    for(int &s: sums){
        int len = 0;
        int temp = 0;
        int l = 0;
        for(int i=0; i<n; i++){
            temp+=v[i];
            l++;
            if(temp==s){
                len = max(len,l);
                temp = 0;
                l=1;
            }
        }
        minlen = min(len, minlen);
    }

    cout<<minlen<<endl;
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