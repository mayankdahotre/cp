// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// bool check(vector<int> &v) {
//     int n = v.size();
//     for (int i = 0; i < n / 2; i++) {
//         if (v[i] != v[n - i - 1]) {
//             return false;
//         }
//     }
//     return true;
// }

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     vector<int> b;
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }
//     if (check(v)) {
//         cout << "YES" << endl;
//         return;
//     }
//     set<int> val;
//     for(int i=0; i<n; i++) val.insert(v[i]);

//     if(val.size()<=2){
//         cout<<"YES"<<endl;
//         return;
//     }

//     for(auto i: val){
//         vector<int> b = v;
//         b.erase(remove(b.begin(), b.end(), i), b.end());
//         if(check(b)){
//             cout<<"YES"<<endl;
//             return;
//         }
//     }

//     cout<<"NO"<<endl;
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

bool is_palindrome(const vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n / 2; i++) {
        if (v[i] != v[n - i - 1]) {
            return false;
        }
    }
    return true;
}

bool check(const vector<int>& v, int skip) {
    vector<int> temp;
    for (int x : v) {
        if (x != skip) temp.push_back(x);
    }
    return is_palindrome(temp);
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int l = 0, r = n - 1;
    while (l < r && v[l] == v[r]) {
        l++;
        r--;
    }

    if (l >= r || check(v, v[l]) || check(v, v[r])) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
