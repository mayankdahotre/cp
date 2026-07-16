#include <bits/stdc++.h>
using namespace std;

#define int long long

void op2(vector<int> &v){
    for(int i=0; i<v.size(); i++) v[i]--;
}

void op1(vector<int> &v){
   for(int i=0; i<v.size(); i++){
        if(v[i]>1){
            v[i]--;
            break;
        }
   }
}

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    int num = 0;

    while(count(v.begin(), v.end(), 0)!=v.size()){
        if(*min_element(v.begin(), v.end())==1){
            op2(v);
            num++;
        }
        else{
            op1(v);
            num++;
        }
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