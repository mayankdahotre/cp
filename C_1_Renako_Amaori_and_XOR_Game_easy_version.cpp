// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin >> n;

//     vector<int> a(n), b(n);
//     for(int i = 0; i < n; i++) cin >> a[i];
//     for(int i = 0; i < n; i++) cin >> b[i];

//     int X = 0, Y = 0;
//     for(int i = 0; i < n; i++) {
//         X ^= a[i];
//         Y ^= b[i];
//     }

//     int Odd = 0, Even = 0;
//     for(int i = 0; i < n; i++) {
//         if(a[i] != b[i]) {
//             if((i+1) & 1) Odd++;
//             else Even++;
//         }
//     }

//     if(X == Y) {
//         cout << "Tie\n";
//         return;
//     }

//     if(X > Y) {
//         if(Odd > 0) cout << "Ajisai\n";
//         else cout << "Mai\n";
//     } else {
//         if(Even > 0) cout << "Mai\n";
//         else cout << "Ajisai\n";
//     }
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

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    int xor1=0, xor2=0;
    for(int i=0; i<n; i++){
        if(i%2==0){
            if(xor1==0){
                if(a[i]==1) continue;
                else if(b[i]==1) swap(a[i], b[i]);

                xor1=xor1^a[i];
                xor2=xor2^b[i];
            }
            else{
                if(a[i]==0) continue;
                else if(b[i]==0) swap(a[i], b[i]);

                xor1=xor1^a[i];
                xor2=xor2^b[i];
            }
        }
        else{
            if(xor2==0){
                if(b[i]==1) continue;
                else if(a[i]==1) swap(a[i], b[i]);

                xor1=xor1^a[i];
                xor2=xor2^b[i];
            }
            else{
                if(b[i]==0) continue;
                else if(a[i]==0) swap(a[i], b[i]);

                xor1=xor1^a[i];
                xor2=xor2^b[i];
            }
        }
    }

    if(xor1==xor2) cout<<"Tie"<<endl;
    else if(xor1>xor2) cout<<"Ajisai"<<endl;
    else cout<<"Mai"<<endl;

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