#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> p(11000, 1);
vector<int> pr;

void sieve(){
    p[0] = p[1] = 0;

    for(int i = 2; i < 11000; i++){
        if(p[i]){
            pr.push_back(i);
            for(int j = i * i; j < 11000; j += i){
                p[j] = 0;
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;

    vector<int> v(n, 0);

    for(int i=0; i<n; i++){
        v[i]=pr[i]*pr[i+1];
    }

    for(int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}