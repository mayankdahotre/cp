#include <bits/stdc++.h>
using namespace std;

#define int long long

int f(int n){
    int sum=0;
    while(n){
        sum*=10;
        sum+=n%10;
        n/=10;
    }
    return sum;
}

void solve() {
    int n;
    cin>>n;

    vector<int> cod(10,0);
    int sod=f(n);

    string s = to_string(n);
    for(int i=0; i<s.length(); i++){
        cod[s[i]-'0']++;
    }

    string suf = to_string(sod);
    while(sod>9){
        int m = f(sod);
        suf+=to_string(m);
        sod=m;
    }

    for(int i=0; i<9*s.length(); i++){
        int nx = i;
        string ns = to_string(nx);
        while(nx>9){
            int m = f(nx);
            ns+=to_string(m);
            nx=m;
        }

        vector<int> ncod(10);
        int nsod = 0;
        for(int i=0; i<ns.size(); i++){
            ncod[ns[i]-'0']++;
            nsod+=s[i]-'0';
        }

        bool can = true;
        for(int i=0; i<10; i++){
            if(ncod[i]>cod[i]) can = false;
        }
        if(sod-nsod!=nx) can = false;
        if(can){
            string ans;

            for(int i=9; i>=0; i--){
                while(ncod[i]!=cod[i]){
                    ans+=char('0'+i);
                    ncod[i]++;
                }
            }

            ans+=ns;
            cout<<ans<<endl;
            return;
        }
        
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