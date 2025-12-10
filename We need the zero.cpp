#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

   int x = 0;
   for(int i = 0; i < n; i++){
    x ^= a[i];
   }

   if(x == 0){
    cout << 0 << endl;
   } else{
    if(n & 1){
        cout << x << endl;
    } else{
        cout << -1 << endl;
    }
   }
}
     
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
