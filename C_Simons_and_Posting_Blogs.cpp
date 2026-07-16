// // #include <bits/stdc++.h>
// // using namespace std;

// // #define int long long

// // vector<int> cmp(vector<int> a, vector<int> b){
// //     return (a < b ? a : b);  // proper lexicographic compare
// // }

// // vector<int> helper(vector<int> p, vector<vector<int>> &v){
// //     int n = v.size();

// //     stack<int> st1, st2;

// //     for(int i = 0; i < n; i++){
// //         int k = p[i];

// //         for(int j = 0; j < (int)v[k].size(); j++){
// //             bool found = false;

// //             while(!st1.empty()){
// //                 int e = st1.top();
// //                 st1.pop();

// //                 if(e == v[k][j]){
// //                     found = true;
// //                     break;
// //                 }

// //                 st2.push(e);
// //             }

// //             while(!st2.empty()){
// //                 st1.push(st2.top());
// //                 st2.pop();
// //             }

// //             st1.push(v[k][j]);
// //         }
// //     }

// //     vector<int> res;
// //     while(!st1.empty()){
// //         res.push_back(st1.top());
// //         st1.pop();
// //     }

// //     return res;
// // }

// // void solve() {
// //     int n;
// //     cin >> n;

// //     vector<vector<int>> v(n);
// //     for(int i = 0; i < n; i++){
// //         int li;
// //         cin >> li;

// //         v[i].resize(li);
// //         for(int j = 0; j < li; j++) cin >> v[i][j];
// //     }

// //     vector<int> p(n);
// //     iota(p.begin(), p.end(), 0);

// //     vector<int> ans = helper(p, v);

// //     while(next_permutation(p.begin(), p.end())){
// //         ans = cmp(ans, helper(p, v));
// //     }

// //     for(auto e: ans) cout << e << " ";
// //     cout << endl;
// // }

// // int32_t main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);

// //     int T;
// //     cin >> T;
// //     while(T--) solve();

// //     return 0;
// // }














// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// // same helper (unchanged)
// vector<int> helper(vector<vector<int>> &v){
//     int n = v.size();

//     stack<int> st1, st2;

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < (int)v[i].size(); j++){
//             while(!st1.empty()){
//                 int e = st1.top();
//                 st1.pop();

//                 if(e == v[i][j]) break;

//                 st2.push(e);
//             }

//             while(!st2.empty()){
//                 st1.push(st2.top());
//                 st2.pop();
//             }

//             st1.push(v[i][j]);
//         }
//     }

//     vector<int> res;
//     while(!st1.empty()){
//         res.push_back(st1.top());
//         st1.pop();
//     }

//     // reverse(res.begin(), res.end());
//     return res;
// }

// bool cmp(const vector<int>& a, const vector<int>& b){
//     int i = (int)a.size() - 1;
//     int j = (int)b.size() - 1;

//     // compare from the back
//     while(i >= 0 && j >= 0){
//         if(a[i] != b[j]){
//             return a[i] > b[j];  // smaller element wins
//         }
//         i--; 
//         j--;
//     }

//     // if all compared equal → shorter one is smaller
//     return a.size() > b.size();
// }

// vector<int> lastocc(vector<int> v){
//     int n = v.size();
//     set<int> s;

//     reverse(v.begin(), v.end());

//     vector<int> res;
//     for(int i=0; i<n; i++){
//         if(s.find(v[i])==s.end()){
//             res.push_back(v[i]);
//             s.insert(v[i]);
//         }
//     }

//     reverse(res.begin(), res.end());

//     return res;
// }

// void solve() {
//     int n;
//     cin >> n;

//     vector<vector<int>> v(n);
//     for(int i = 0; i < n; i++){
//         int li;
//         cin >> li;

//         v[i].resize(li);
//         for(int j = 0; j < li; j++) cin >> v[i][j];
//     }

//     for(int i=0; i<n; i++){
//         v[i] = lastocc(v[i]);
//         reverse(v[i].begin(), v[i].end());
//     }

//     sort(v.begin(), v.end(), cmp);

//     vector<int> ans;
//     for(int i = 0; i < n; i++){
//         for(int x : v[i]){
//             ans.push_back(x);
//         }
//     }

//     reverse(ans.begin(), ans.end());
//     ans = lastocc(ans);
//     reverse(ans.begin(), ans.end());


//     for(auto e: ans) cout << e << " ";
//     cout << endl;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while(T--) solve();

//     return 0;
// }








#include <bits/stdc++.h>
using namespace std;

vector<int> lastOcc(vector<int> v) {
    set<int> seen;
    vector<int> res;
    for (int i = (int)v.size()-1; i >= 0; i--) {
        if (!seen.count(v[i])) { seen.insert(v[i]); res.push_back(v[i]); }
    }
    reverse(res.begin(), res.end());
    return res;
}

void solve() {
    int n; cin >> n;
    vector<vector<int>> blogs(n);
    for (int i = 0; i < n; i++) {
        int l; cin >> l; blogs[i].resize(l);
        for (int j = 0; j < l; j++) cin >> blogs[i][j];
        blogs[i] = lastOcc(blogs[i]);
    }
    sort(blogs.begin(), blogs.end(), [](const vector<int>& a, const vector<int>& b){
        int i = (int)a.size()-1, j = (int)b.size()-1;
        while (i >= 0 && j >= 0) {
            if (a[i] != b[j]) return a[i] < b[j];
            i--; j--;
        }
        return i < j;
    });
    vector<int> all;
    for (auto& blog : blogs) for (int x : blog) all.push_back(x);
    vector<int> ans = lastOcc(all);
    for (int x : ans) cout << x << " ";
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
}