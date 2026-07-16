// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     string s;
//     cin>>s;

//     reverse(s.begin(), s.end());

//     int z = count(s.begin(), s.end(), '0');

//     vector<int> v(n,-1);
//     auto prev = s.begin();
//     for(int i=0; i<z; i++){
//         auto pos = find(prev, s.end(), '0');
//         int o = count(s.begin(), pos, '1');
//         v[i]=o;
//         if(i>0) v[i]+=v[i-1];

//         prev = pos+1;
//     }

//     for(int i=0; i<n; i++) cout<<v[i]<<" ";
//     cout<<endl;

//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int T;
//     cin >> T;
//     while (T--) {
//         solve();
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    reverse(s.begin(), s.end());

    int z = count(s.begin(), s.end(), '0');

    vector<int> pref(n+1,0);

    for(int i = 0; i < n; i++){
        pref[i+1] = pref[i] + (s[i] == '1');
    }

    vector<int> v(n,-1);

    int idx = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            v[idx] = pref[i];

            if(idx > 0) v[idx] += v[idx-1];

            idx++;
        }
    }

    for(int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while(T--){
        solve();
    }
}