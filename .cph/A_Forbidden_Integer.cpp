#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,k,x;
    cin>>n>>k>>x;

    vector<int> nums;
    for(int i=1; i<=k; i++){
        if(i!=x) nums.push_back(i);
    }

    sort(nums.begin(), nums.end(), greater<int>());

    vector<int> ans;
    
    for(int i=0; i<k-1; i++){
        while(n>=nums[i]){
            ans.push_back(nums[i]);
            n-=nums[i];
        }
    }

    if(n){
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
        for(auto i: ans) cout<<i<<" ";
        cout<<endl;
        return;
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