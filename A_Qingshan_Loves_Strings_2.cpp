// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     string s;
//     cin>>s;

//     if(n%2){
//         cout<<-1<<endl;
//         return;
//     }

//     bool ok=true;
//     for(int i=0; i<n; i++){
//         if(s[i]!=s[n-1-i]){
//             ok=false;
//             break;
//         }
//     }

//     if(ok){
//         cout<<0<<endl;
//         cout<<endl;
//         return;
//     }

//     int d=0;
//     for(int i=0; i<n; i++){
//         if(s[i]=='0') d++;
//         else d--;
//     }

//     if(d){
//         cout<<-1<<endl;
//         return;
//     }

//     vector<int> mvs;
//     int i=0, j=n-1;
//     while(i<j){
//         if(s[i]=='0' && s[j]=='0'){
//             s=s.substr(0,j)+"01"+s.substr(j);
//             i++;
//             j++;
//             mvs.push_back(j);
//         }
//         else if(s[i]=='1' && s[j]=='1'){
//             s=s.substr(0,i)+"01"+s.substr(i);
//             i++;
//             j++;
//             mvs.push_back(i);
//         }
//         else{
//             i++;
//             j--;
//         }
//     }

//     cout<<mvs.size()<<endl;
//     for(int i=0; i<n; i++) cout<<mvs[i]<<" ";
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
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    if(n%2){
        cout<<-1<<endl;
        return;
    }

    int c0 = 0;
    for(char c: s) if(c=='0') c0++;

    if(c0!=n/2){
        cout<<-1<<endl;
        return;
    }

    vector<int> mvs;

    int i=0, j=n-1;
    while(i<j){
        if(s[i]==s[j]){
            if(s[i]=='0'){
                mvs.push_back(j+1);
                s = s.substr(0, j+1) + "01" + s.substr(j+1);
                j+=2;
            }
            else{
                mvs.push_back(i);
                s = s.substr(0, i) + "01" + s.substr(i);
                i+=2;
                j+=2;
            }
        }
        i++;
        j--;
    }

    cout<<mvs.size()<<endl;

    for(int i=0; i<mvs.size(); i++)cout<<mvs[i]<<" ";
    cout << endl;
    
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while(T--){
        solve();
    }

    return 0;
}