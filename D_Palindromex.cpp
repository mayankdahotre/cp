#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin>>n;

    vector<int> v(2*n);
    for(int i=0; i<2*n; i++) cin>>v[i];

    int z1=-1, z2=-1;
    for(int i=0; i<2*n; i++){
        if(v[i]==0){
            if(z1==-1) z1=i;
            z2=i;
        }
    }

    //c1
    int i=z1, j=z1;

    while(i>=0 && j<=2*n-1){
        if(v[i-1] != v[j+1]) break;
        i--;
        j++;
    }

    set<int> s2(v.begin()+i, v.begin()+j+1);

    int mex2=0;
    while(s2.count(mex2)) mex2++;

    //c2
    i=z2, j=z2;

    while(i>=0 && j<=2*n-1){
        if(v[i-1] != v[j+1]) break;
        i--;
        j++;
    }

    set<int> s3(v.begin()+i, v.begin()+j+1);

    int mex3=0;
    while(s3.count(mex3)) mex3++;

    bool isplz=true;
    for(int k=z1; k<=z2; k++){
        if(v[k] != v[z1+z2-k]){
            isplz=false;
            break;
        }
    }

    if(!isplz){
        cout<<max(mex2,mex3)<<endl;
        return;
    }

    //c1
    i=z1, j=z2;

    while(i>=0 && j<=2*n-1){
        if(v[i-1] != v[j+1]) break;
        i--;
        j++;
    }

    set<int> s(v.begin()+i, v.begin()+j+1);

    int mex=0;
    while(s.count(mex)) mex++;

    cout<<max({mex,mex2,mex3})<<endl;
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