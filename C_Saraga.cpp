#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string s,t;
    cin>>s>>t;

    int n = s.length();
    int m = t.length();

    // reverse(t.begin(), t.end());

    int mxl=0;
    string mx;
    int idx = -1;
    for(int d=m-1; d>=0; d--){
        int l=0;
        string ol;
        for(int i=0; i<n; i++){
            if(s[i]==t[i+d]){
                l++;
                ol+=s[i];

                if(idx==-1) idx=i;
            }
            else{
                if(l>mxl){
                    mxl=l;
                    mx=ol;

                    ol="";
                    l=0;

                    idx=-1;
                }
            }
        }
        if(l>mxl){
            mxl=l;
            mx=ol;

            ol="";
            l=0;
            
            idx=-1;
        }
    }

    string res;
    res+=s.substr(0,idx);
    string com = s.substr(idx, mxl);
    int idx2 = t.find(com);
    res+=t.substr(idx2);

    cout<<res<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}