// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int a,b,c,d;
//     cin>>a>>b>>c>>d;

//     if(b<=d){
//         if(a<=c){
//             cout<<"Flower"<<endl;
//             return;
//         }
//         else{
//             if(a+b<=c+d){
//                 cout<<"Flower"<<endl;
//                 return;
//             }
//             else{
//                 cout<<"Gellyfish"<<endl;
//                 return;
//             }
//         }
//     }
//     else{
//         if(a>=c){
//             cout<<"Gellyfish"<<endl;
//             return;
//         }
//         else{
//             if(a+b>=c+d){
//                 cout<<"Gellyfish"<<endl;
//                 return;
//             }
//             else{
//                 cout<<"Flower"<<endl;
//                 return;
//             }
//         }
//     }
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










// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int a,b,c,d;
//     cin>>a>>b>>c>>d;

//     if(min(a,b)<min(c,d)){
//         cout<<"Flower"<<endl;
//         return;
//     }
//     else if(min(a,b)>min(c,d)){
//         cout<<"Gellyfish"<<endl;
//         return;
//     }
//     else{
//         if(b>d){
//             cout<<"Gellyfish"<<endl;
//             return;
//         }
//         else{
//             cout<<"Flower"<<endl;
//             return;
//         }
//     }
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
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if (c >= d) {
        if (a < d){
            cout << "Flower"<<endl;
            return;
        }
        else{
            cout << "Gellyfish"<<endl;
            return;
        }
    } 
    else {
        if (b <= min(a, c)){
            cout << "Gellyfish"<<endl;
            return;
        }
        else{
            cout << "Flower"<<endl;
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