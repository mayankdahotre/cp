#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    int cnt=0;
    for(int i=0; i<n; i++) if(a[i]==b[i]) cnt++;

    if((cnt>1) || (cnt==1 && n%2==0)){
        cout<<-1<<endl;
        return;
    }
    
    // if(cnt==1 && n%2==0){
    //     cout<<-1<<endl;
    //     return;
    // }

    map<int,int> m;
    for(int i=0; i<n; i++) m[a[i]]=b[i];

    for(int i=0; i<n; i++){
        if(m[b[i]]!=a[i]){
            cout<<-1<<endl;
            // cout<<endl;
            return;
        }
    }

    int same=-1;
    for(int i=0; i<n; i++){
        if(a[i]==b[i]){
            same=i;
            break;
        }
    }

    vector<pair<int,int>> moves;
    if(same!=-1 && same!=n/2){
        moves.push_back({same+1, n/2 +1});
        swap(a[same], a[n/2]);
        swap(b[same], b[n/2]);
    }
    
    // for(int i=0; i<n/2; i++){
    //     if(a[i]!=b[n-1-i]){
    //         // cout<<a[i]<<" "<<b[n-1-i]<<endl;
    //         int i2=-1;
    //         for(int j=0; j<n; j++){
    //             if(b[j]==a[i]){
    //                 i2=j;
    //                 break;
    //             }
    //         }
    //         moves.push_back({i2+1,n-i});
    //         swap(a[i2],a[n-i-1]);
    //         swap(b[i2],b[n-i-1]);
    //     }
    // }

    map<int,int> posB;
    for(int j=0; j<n; j++) posB[b[j]] = j;

    for(int i=0; i<n/2; i++){
        if(a[i] != b[n-1-i]){
            int i2 = posB[a[i]];  // O(1) instead of O(n)
            moves.push_back({i2+1, n-i});
            // update posB after swap
            swap(a[i2], a[n-i-1]);
            swap(b[i2], b[n-i-1]);
            posB[b[n-i-1]] = n-i-1;
            posB[b[i2]] = i2;

        }
    }

    // int i=0, j=n-1;
    // while(true){
    //     if(i==n/2) break;
    //     if(a[i]!=b[n-1-i]){
    //         while(a[i]!=b[j]) j--;
    //         moves.push_back({j+1,n-i});
    //         swap(a[j],a[n-i-1]);
    //         swap(b[j],b[n-i-1]);
    //         j=n-i-1;
    //     }
    //     i++;
    // }



    if(moves.size()==0){
        cout<<0<<endl;
        // cout<<endl;
        return;
    }

    cout<<moves.size()<<endl;
    for(int i=0; i<moves.size(); i++){
        cout<<moves[i].first<<" "<<moves[i].second<<endl;
    }
    // cout<<endl;
    // cout<<endl;

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