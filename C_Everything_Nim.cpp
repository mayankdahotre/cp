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

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end());
//     v.erase(unique(v.begin(), v.end()), v.end());

//     int x = v.size();

//     int o=0, e=0;
//     for(int i=0; i<v.size()-1; i++){
//         if(v[i+1]-v[i]>1){
//             if(i%2) e++;
//             else o++;
//         }
//     }

//     if(x%2){
//         if(o%2) cout<<"Bob"<<endl;
//         else cout<<"Alice"<<endl;
//     }
//     else{
//         if(e%2) cout<<"Alice"<<endl;
//         else cout<<"Bob"<<endl;
//     }

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













// Problem: CF 1965 - A (Div. 2) / Everything Nim
// Tag: Game Theory / Nim Variant / Greedy / MEX
// The Trick: Players have no choice but to subtract 1 during consecutive pile sequences (1, 2, 3...). 
// The game is entirely decided at the FIRST gap greater than 1 (the MEX of the unique pile sizes). 
// The player who encounters this gap holds the "trump card" to dictate and engineer their win.
// mex v max, optimal strategy, odd or even gaps dont matter cause of optimal strategy
// Revisit Target: Monday, July 20, 2026 (3 days from now).



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
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    int x = v.size();

    int fgi = -1;
    
    if (v[0] > 1) {
        fgi = 0;
    } 
    else {
        for(int i=0; i<x-1; i++){
            if(v[i+1]-v[i]>1){
                fgi = i + 1;
                break;
            }
        }
    }

    if (fgi != -1) {
        if (fgi % 2 == 0) cout << "Alice" << endl;
        else cout << "Bob" << endl;
    } 
    else {
        if (x % 2 != 0) cout << "Alice" << endl;
        else cout << "Bob" << endl;
    }

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