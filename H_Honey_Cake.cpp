#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

vector<int> fs(int n){
    vector<int> res;
    res.push_back(1);
    res.push_back(n);
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            res.push_back(i);
            if(i!=n/i) res.push_back(n/i);
        }
    }

    sort(res.begin(), res.end());

    return res;
}

void solve() {
    int w,h,d;
    cin>>w>>h>>d;

    int n;
    cin>>n;

    vector<int> wf=fs(w), hf=fs(h), df=fs(d);

    for(int i=0; i<wf.size(); i++){
        for(int j=0; j<hf.size(); j++){
            for(int k=0; k<df.size(); k++){
                if(wf[i]*hf[j]*df[k]==n){
                    cout<<wf[i]-1<<" "<<hf[j]-1<<" "<<df[k]-1<<endl;
                    return;
                }
            }
        }
    }

    cout<<-1<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}