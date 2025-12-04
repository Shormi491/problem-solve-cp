#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 0;
    for(int i=0;i<n;i++){
        int petya,vasya,tonya;
        cin>>petya>>vasya>>tonya;
        int sum= petya + vasya + tonya;
        if(sum>=2){
            count++;
        }
    }
    cout<<count<<endl;


return 0;
}
input:
3
1 1 0
1 1 1
1 0 0
output:2
