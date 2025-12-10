#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    string s; cin >> s;
    set<char> st;
    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        st.insert(ch);
    }
    set<char>::iterator it = st.begin(); 

    cout << *it << " ";
    int index = s.find(*it);
    for(int i=0; i<s.size(); i++){
        if(i == index) continue;
        else cout << s[i];
    }

    cout << endl;

}

int main(){
    ios :: sync_with_stdio(false);
   
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;

}
