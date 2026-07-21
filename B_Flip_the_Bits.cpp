// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n;
//     cin>>n;

//     string a,b;
//     cin>>a>>b;

//     if(a==b){
//         yes;
//         return;
//     }

//     vector<int> z;
//     z.pus_back(0);

//     vector<int> pre1(n+1,0);
//     for(int i=0; i<n; i++){
//         pre1[i]=pre1[i-1];
//         if(a[i]=='1') pre1[i]++;
//         else pre1[i]--;

//         if(pre[i]==0) z.push_back(i);
//     }

//     for(int i=0; i<z.size()-1; i++){
//         int l = z[i];
//         int r = z[i+1];
        
//         int x=0;
//         for(int i=l-1; i<r; i++){
//             if(a[i]==b[i]) x++;
//             else x--;
//         }

//         if(abs(x)!=r-l+1){
//             no;
//             return;
//         }
//     }

//     yes;
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
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    if (a == b) {
        yes;
        return;
    }

    vector<int> z;
    z.push_back(0);

    vector<int> pre1(n, 0);
    for (int i = 0; i < n; i++) {
        pre1[i] = (i > 0 ? pre1[i - 1] : 0);
        if (a[i] == '1') pre1[i]++;
        else pre1[i]--;

        if (pre1[i] == 0) z.push_back(i + 1);
    }

    for (size_t i = 0; i < z.size() - 1; i++) {
        int l = z[i];
        int r = z[i + 1];
        
        int x = 0;
        for (int j = l; j < r; j++) {
            if (a[j] == b[j]) x++;
            else x--;
        }

        if (abs(x) != r - l) {
            no;
            return;
        }
    }

    int last = z.back();
    for (int j = last; j < n; j++) {
        if (a[j] != b[j]) {
            no;
            return;
        }
    }

    yes;
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