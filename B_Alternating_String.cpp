// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     string s;
//     cin>>s;

//     int n = s.length();

//     int cnt1=0;
//     bool f = false;
//     for(int i=0; i<n; i++){
//         if(i%2 && s[i]!='b'){
//             if(!f){
//                 f=false;
//             }
//             else{
//                 cnt1++;
//                 f=false;
//             }
//         }
//         else if(i%2==0 && s[i]!='a'){
//             if(!f){
//                 f=false;
//             }
//         }
        
//         if(i%2 && s[i]=='b'){
//             if(!f){
//                 cnt1++;
//                 f=true;
//             }

//         }
//         else if(i%2==0 && s[i]=='a'){
//             if(!f){
//                 cnt1++;
//                 f=true;
//             }
//         }
//     }


//     int cnt2=0;
//     for(int i=0; i<n; i++){
//         if(i%2 && s[i]!='a'){
//             if(!f){
//                 f=false;
//             }
//             else{
//                 cnt2++;
//                 f=false;
//             }
//         }
//         else if(i%2==0 && s[i]!='b'){
//             if(!f){
//                 f=false;
//             }
//         }
        
//         if(i%2 && s[i]=='a'){
//             if(!f){
//                 cnt2++;
//                 f=true;
//             }

//         }
//         else if(i%2==0 && s[i]=='b'){
//             if(!f){
//                 cnt2++;
//                 f=true;
//             }
//         }
//     }

//     if(min(cnt1,cnt2)>1){
//         cout<<"NO"<<endl;
//         return;
//     }
//     cout<<"YES"<<endl;
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

int countSegments(const string &s, char start){
    int n = s.size();
    int segments = 0;

    for(int i = 0; i < n; i++){
        char expected = (i % 2 == 0 ? start : (start == 'a' ? 'b' : 'a'));

        if(s[i] != expected){
            segments++;
            while(i < n){
                char exp = (i % 2 == 0 ? start : (start == 'a' ? 'b' : 'a'));
                if(s[i] == exp) break;
                i++;
            }
            i--; 
        }
    }
    return segments;
}

void solve(){
    string s;
    cin >> s;

    int seg1 = countSegments(s, 'a'); 
    int seg2 = countSegments(s, 'b'); 

    if(min(seg1, seg2) <= 1) cout << "YES" << endl;
    else cout << "NO" <<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}