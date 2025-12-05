#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
            int X;
            cin>>X;
            s.insert(X);
    }
    cout<<s.size();
    return 0;
}
