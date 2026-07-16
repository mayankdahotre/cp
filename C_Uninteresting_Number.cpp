// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     string s;
//     cin>>s;

//     int n = s.length();

//     int sod=0, n2=0, n3=0;
//     for(int i=0; i<n; i++){
//         sod+=s[i]-'0';
//         if(s[i]=='2') n2++;
//         if(s[i]=='3') n3++;
//     }

//     if(n3==n){
//         cout<<"YES"<<endl;
//         return;
//     }

//     sod=sod%9;
//     int x=sod;

//     // if(x%2==0){ cout<<"NO"<<endl; return; }
//     if(x==0){
//         cout<<"YES"<<endl;
//         return;
//     }
//     if(x==1){
//         if(n2>=4 || (n3>=1 && n2>=1)) { cout<<"YES"<<endl; return;}
//         else{ cout<<"NO"<<endl; return; }
//     }
//     else if(x==2){
//         if((n2>=8) || (n2>=5 && n3>=1) || (n2>=2 && n3>=2)) { cout<<"YES"<<endl; return; }
//         else { cout<<"NO"<<endl; return; }
//     }
//     else if(x==3){
//         if(n3>=1 || n2>=3) { cout<<"YES"<<endl; return; }
//         else { cout<<"NO"<<endl; return; }
//     }
//     else if(x==4){
//         if((n2>=7) || (n2>=4 && n3>=1) || (n2>=1 && n3>=2)) { cout<<"YES"<<endl; return; }
//         else { cout<<"NO"<<endl; return; }
//     }
//     else if(x==5){
//         if(n2>=2) { cout<<"YES"<<endl; return; }
//         else { cout<<"NO"<<endl; return; }
//     }
//     else if(x==6){
//         if((n2>=6) || (n2>=3 && n3>=1) || (n3>=2)) { cout<<"YES"<<endl; return; }
//         else { cout<<"NO"<<endl; return; }
//     }
//     else if(x==7){
//         if(n2>=1) { cout<<"YES"<<endl; return; }
//         else { cout<<"NO"<<endl; return; }
//     }
//     else if(x==8){
//         if((n2>=5) || (n2>=2 && n3>=1)) { cout<<"YES"<<endl; return; }
//         else { cout<<"NO"<<endl; return; }
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

    string s;
    cin >> s;

    int sod=0, n2=0, n3=0;

    for(int i=0; i<s.length(); i++){

        sod+=s[i]-'0';

        if(s[i]=='2') n2++;
        if(s[i]=='3') n3++;
    }

    sod%=9;

    for(int a=0; a<=min(8LL,n2); a++){

        for(int b=0; b<=min(8LL,n3); b++){

            if((sod+2*a+6*b)%9==0){

                cout<<"YES"<<endl;
                return;
            }
        }
    }

    cout<<"NO"<<endl;
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